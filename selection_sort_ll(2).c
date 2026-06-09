// C program to sort a linked list 
// using selection sort changing links
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to sort the linked list using selection sort
struct Node* selectionSort(struct Node* head) {

    // If the list is empty or has one element
    if (head == NULL || head->next == NULL) {
        return head;
    } 

    struct Node* sorted = NULL;

    while (head != NULL) {
        struct Node* min_node = head;
        struct Node* prev_min = NULL;
        struct Node* curr = head;
        struct Node* prev = NULL;

        // Find the node with the minimum value
        while (curr != NULL) {
            if (curr->data < min_node->data) {
                min_node = curr;
                prev_min = prev;
            }
            prev = curr;
            curr = curr->next;
        }

        // Remove min_node from the unsorted part
        if (min_node == head) {
            head = head->next;
        } 
        else {
            prev_min->next = min_node->next;
        }

        // Insert min_node at the 
      	// beginning of the sorted list
        min_node->next = sorted;
        sorted = min_node;
    }

    // Reverse the sorted list to maintain 
  	// original order
    struct Node* prev = NULL;
    struct Node* curr = sorted;
    while (curr != NULL) {
        struct Node* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}

void printList(struct Node* node) {
    struct Node* curr = node;
    while (curr != NULL) {
        printf(" %d", curr->data);
        curr = curr->next;
    }
}

struct Node* createNode(int new_data) {
    struct Node* new_node
        = (struct Node*)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

int main() {
  
    // Create a hard-coded linked list:
    // 5 -> 3 -> 4 -> 1 -> 2
    struct Node* head = createNode(5);
    head->next = createNode(3);
    head->next->next = createNode(4);
    head->next->next->next = createNode(1);
    head->next->next->next->next = createNode(2);

    head = selectionSort(head);

    printList(head);

    return 0;
}
