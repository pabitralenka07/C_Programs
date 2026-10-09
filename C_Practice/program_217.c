/* Program 217: DP 0-1 Knapsack
   Compile: gcc program_217.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// 0-1 Knapsack using bottom-up DP: O(n*W)
int main(){
    int weights[]={1,3,4,5};
    int values[] ={1,4,5,7};
    int n=4, W=7;
    int dp[n+1][W+1];
    for(int i=0;i<=n;i++) for(int w=0;w<=W;w++){
        if(i==0||w==0) dp[i][w]=0;
        else if(weights[i-1]<=w)
            dp[i][w]=values[i-1]+dp[i-1][w-weights[i-1]] > dp[i-1][w]
                     ? values[i-1]+dp[i-1][w-weights[i-1]] : dp[i-1][w];
        else dp[i][w]=dp[i-1][w];
    }
    printf("Max value = %d\n",dp[n][W]);
    return 0;
}
