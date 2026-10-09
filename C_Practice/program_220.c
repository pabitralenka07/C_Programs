/* Program 220: DP Coin Change Minimum
   Compile: gcc program_220.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <limits.h>
// Coin change DP: minimum coins to make amount (works for any denomination set)
int main(){
    int coins[]={1,5,6,9};
    int n=4, amount;
    scanf("%d",&amount);
    int dp[amount+1];
    dp[0]=0;
    for(int i=1;i<=amount;i++) dp[i]=INT_MAX;
    for(int i=1;i<=amount;i++){
        for(int j=0;j<n;j++){
            if(coins[j]<=i && dp[i-coins[j]]!=INT_MAX){
                int val=dp[i-coins[j]]+1;
                if(val<dp[i]) dp[i]=val;
            }
        }
    }
    printf(dp[amount]==INT_MAX ? "Not possible\n" : "Min coins: %d\n", dp[amount]);
    return 0;
}
