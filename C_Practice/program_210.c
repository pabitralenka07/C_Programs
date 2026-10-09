/* Program 210: Graph Count Connected Components
   Compile: gcc program_210.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define N 7
// Count connected components using DFS
int g[N][N]={{0,1,0,0,0,0,0},{1,0,1,0,0,0,0},{0,1,0,0,0,0,0},
             {0,0,0,0,1,0,0},{0,0,0,1,0,0,0},{0,0,0,0,0,0,1},{0,0,0,0,0,1,0}};
int visited[N]={0};
void dfs(int v){ visited[v]=1; for(int i=0;i<N;i++) if(g[v][i]&&!visited[i]) dfs(i); }

int main(){
    int comp=0;
    for(int i=0;i<N;i++) if(!visited[i]){ dfs(i); comp++; }
    printf("Connected components: %d\n",comp);
    return 0;
}
