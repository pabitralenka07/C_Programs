/* Program 214: Greedy Job Sequencing
   Compile: gcc program_214.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Job sequencing with deadlines to maximize profit (greedy)
typedef struct { char id; int deadline,profit; } Job;

int main(){
    Job jobs[]={{'a',2,100},{'b',1,19},{'c',2,27},{'d',1,25},{'e',3,15}};
    int n=5;
    // Sort by profit desc
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(jobs[j].profit<jobs[j+1].profit){ Job t=jobs[j]; jobs[j]=jobs[j+1]; jobs[j+1]=t; }
    int slot[3]={0}, maxProfit=0; char result[3]={0};
    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline-1;j>=0;j--){
            if(!slot[j]){ slot[j]=1; result[j]=jobs[i].id; maxProfit+=jobs[i].profit; break; }
        }
    }
    printf("Jobs: ");
    for(int i=0;i<3;i++) if(result[i]) printf("%c ",result[i]);
    printf("\nMax profit: %d\n",maxProfit);
    return 0;
}
