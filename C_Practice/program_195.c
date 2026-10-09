/* Program 195: Queue BFS Shortest Path Grid
   Compile: gcc program_195.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// BFS to find shortest path length in a 4x4 grid (0=open,1=wall)
#define R 4
#define C 4
int grid[R][C]={{0,0,0,0},{1,1,0,1},{0,0,0,1},{0,1,0,0}};
int dist[R][C];
int qr[100],qc[100],qf=0,qb=0;
int dr[]={-1,1,0,0}, dc[]={0,0,-1,1};

int main(){
    memset(dist,-1,sizeof(dist));
    dist[0][0]=0; qr[qb]=0; qc[qb++]=0;
    while(qf<qb){
        int r=qr[qf],c=qc[qf++];
        for(int d=0;d<4;d++){
            int nr=r+dr[d], nc=c+dc[d];
            if(nr>=0&&nr<R&&nc>=0&&nc<C&&grid[nr][nc]==0&&dist[nr][nc]==-1){
                dist[nr][nc]=dist[r][c]+1;
                qr[qb]=nr; qc[qb++]=nc;
            }
        }
    }
    printf("Shortest dist to (%d,%d) = %d\n",R-1,C-1,dist[R-1][C-1]);
    return 0;
}
