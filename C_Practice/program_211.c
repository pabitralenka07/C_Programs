#include <stdio.h>
// Greedy algorithm: maximum non-overlapping activities
// Sort by end time, pick greedily
typedef struct { 
    int start,end;
} Activity;

int cmp(Activity a, Activity b){ 
    return a.end < b.end; 
}

int main(){
    Activity acts[]={{1,2},{3,4},{0,6},{5,7},{8,9},{5,9}};
    int n=6;
    // Bubble sort by end time
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(acts[j].end>acts[j+1].end){
                Activity t=acts[j]; acts[j]=acts[j+1]; acts[j+1]=t; 
            }
    printf("Selected activities:\n");
    int last=-1, count=0;
    for(int i=0;i<n;i++){
        if(acts[i].start>=last){
            printf("(%d,%d) ",acts[i].start,acts[i].end);
            last=acts[i].end; count++;
        }
    }
    printf("\nTotal: %d\n",count);
    return 0;
}
