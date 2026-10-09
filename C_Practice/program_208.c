/* Program 208: Graph DFS Traversal
   Compile: gcc program_208.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define N 6
// Depth First Search on graph (adjacency matrix)
int g[N][N]={{0,1,1,0,0,0},{1,0,0,1,0,0},{1,0,0,0,1,0},{0,1,0,0,0,1},{0,0,1,0,0,0},{0,0,0,1,0,0}};
int visited[N]={0};

void dfs(int v){
    printf("%d ",v);
    visited[v]=1;
    for(int i=0;i<N;i++)
        if(g[v][i]&&!visited[i]) dfs(i);
}
int main(){
    dfs(0); printf("\n");
    return 0;
}
