#include<stdio.h>
void wiggleSort(int arr[], int n)
{
    for(int i = 0; i < n-1; i++)
    {
        if(i % 2 == 0)
        {
            if(arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        else
        {
            if(arr[i] < arr[i+1])
            {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
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
    wiggleSort(arr,n);
    for(int i=0;i<n;i++)
    printf("%d",arr[i]);
}



Given: An array of integers heights representing the heights of mountains.

Task: Rearrange the mountains in a zig-zag order (wiggle sort) so that the tallest peaks are at the odd positions and the valleys at even positions, then return the kth tallest peak.
