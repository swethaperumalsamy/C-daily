#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,target;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&target);
    int left=0,right=n-1;
    int min_diff=10000;
    int b_left=0,b_right=0;
    while(left<right)
    {
        int sum=arr[left]+arr[right];
        int diff=abs(sum-target);
        if(diff<min_diff)
        {
            min_diff=diff;
            b_left=left;
            b_right=right;
        }
     if(sum<target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    printf("%d %d",arr[b_left],arr[b_right]);
}
