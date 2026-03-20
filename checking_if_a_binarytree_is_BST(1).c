//Check if a binary tree is BST or not

//logic is converting the tree into inorder and check whether it is sorted, if it is not in ascending order it is not a BST

#include<stdio.h>
int isBST(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        if(arr[i]<=arr[i-1])
        {
            return 0;
        }
    }
        return 1;
    
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(isBST(arr,n))
    {
        printf("BST");
    }
    else
    {
        printf("No");
    }
}
