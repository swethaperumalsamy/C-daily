#include<stdio.h>
#define V 4
#define INF 9999
int minDistance(int dist[], int visited[]){
    int min=INF;
    int min_index=-1;
    for(int i=0;i<V;i++){
        if(visited[i]==0 && dist[i]<min){
            min=dist[i];
            min_index=i;
        }
    }return min_index;
}
void dijkstra(int graph[V][V], int src){
    int dist[V];//0 0 0 0
    int visited[V];//9999->0 9999 9999 9999
    for(int i=0;i<V;i++){
        dist[i]=INF;
        visited[i]=0;
    }
    dist[src]=0;
    for(int count=0;count<V-1;count++){
        int u=minDistance(dist, visited);//2 
        visited[u]=1;
        for(int v=0;v<V;v++){
            if(!visited[v]&& graph[u][v] && dist[u]+graph[u][v]< dist[v]){
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }printf("Shortest path\n");
    for(int i=0;i<V;i++){
        printf("To %d = %d\n",i, dist[i]);
    }
}


int main()
{
    int graph[V][V] = {
        {0,2,4,0},
        {2,0,0,3},
        {4,0,0,1},
        {0,3,1,0}
    };

    dijkstra(graph, 0);
}
