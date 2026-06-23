#include <stdio.h>

int main()
{
int arr[10]={30,40,10,20};
for(int i=1;i<4;i++)
for(int j=i;j>0;j--)
{
    if(arr[j]<arr[j-1])
    {
        int temp=arr[j];
        arr[j]=arr[j-1];
        arr[j-1]=temp;
    }
    else
{
    break;
}
}
for(int i=0;i<4;i++)
{
    printf("%d ",arr[i]);
}}
