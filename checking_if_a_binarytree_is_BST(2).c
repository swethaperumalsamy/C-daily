#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};

struct Node*createNode(int value)
{
    struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

int isBST(struct Node*root,int min,int max)
{
    if(root==NULL)
    {
        return 1;
    }
    if(root->data <=min||root->data >=max)
    {
        return 0;
    }
    return isBST(root->left,min,root->data)&& isBST(root->right,root->data,max);
}

int main()
{
   struct Node*root=createNode(10);
   root->left=createNode(5);
   root->right=createNode(15);
   root->left->left=createNode(2);
   root->left->right=createNode(7);
   
   if(isBST(root,INT_MIN,INT_MAX))
   printf("The Tree is BST");
   else
   printf("The tree isn't BST");
   
   return 0;
}
