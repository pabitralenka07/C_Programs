/* Program 207: Graph Adjacency Matrix
   Compile: gcc program_207.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Represent undirected graph with adjacency matrix
int main(){
    int n=5;
    int g[5][5]={
        {0,1,0,1,0},
        {1,0,1,0,0},
        {0,1,0,1,1},
        {1,0,1,0,0},
        {0,0,1,0,0}
    };
    printf("Adjacency Matrix:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) printf("%d ",g[i][j]);
        printf("\n");
    }
    return 0;
}
