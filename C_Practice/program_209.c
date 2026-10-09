/* Program 209: Graph BFS Traversal
   Compile: gcc program_209.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define N 6
// Breadth First Search on graph (adjacency matrix)
int g[N][N]={{0,1,1,0,0,0},{1,0,0,1,0,0},{1,0,0,0,1,0},{0,1,0,0,0,1},{0,0,1,0,0,0},{0,0,0,1,0,0}};
int visited[N]={0};
int queue[100], front=0, rear=0;

void bfs(int start){
    queue[rear++]=start; visited[start]=1;
    while(front<rear){
        int v=queue[front++];
        printf("%d ",v);
        for(int i=0;i<N;i++)
            if(g[v][i]&&!visited[i]){ visited[i]=1; queue[rear++]=i; }
    }
}
int main(){
    bfs(0); printf("\n");
    return 0;
}
