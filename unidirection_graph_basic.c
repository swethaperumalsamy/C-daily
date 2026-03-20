/*unidirected graph*/

#include <stdio.h>

int main()
{
    int vertex=4;
    int source,destination;
   int arr[4][4]={0};
   for(int i=0;i<vertex;i++)
   {
       for(int j=0;j<vertex;j++)
       {
           printf("%d",arr[i][j]);
       }
       printf("\n");
   }
   int edge=3;
   for(int i=0;i<edge;i++)
   {
       scanf("%d %d",&source,&destination);
       arr[source][destination]=1;
       arr[destination][source]=1;
   }
    for(int i=0;i<vertex;i++)
   {
       for(int j=0;j<vertex;j++)
       {
           printf("%d ",arr[i][j]);
       }
       printf("\n");
   }

    return 0;
}
