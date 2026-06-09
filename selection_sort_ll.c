// C program to sort a linked list 
// using selection sort
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to sort the linked list using selection sort
struct Node* selectionSort(struct Node* head) {
  
    // Traverse through the entire list
    for (struct Node* start = head; start != NULL; start = start->next) {
        
        // Assume the current start node is the minimum
        struct Node* min_node = start;

        // Find the node with the minimum data in the
        // remaining unsorted part of the list
        for (struct Node* curr = start->next; curr != NULL; curr = curr->next) {
            if (curr->data < min_node->data) {
                min_node = curr;
            }
        }

        // Swap the data of start node and min_node
        if (min_node != start) {
            int node = start->data;
            start->data = min_node->data;
            min_node->data = node;
        }
    }

    // Return the head of the sorted linked list
    return head;
}

void printList(struct Node* node) {
    struct Node* curr = node;
    while (curr != NULL) {
        printf(" %d", curr->data);
        curr = curr->next;
    }
    printf("\n");
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
