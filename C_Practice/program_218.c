/* Program 218: DP Longest Common Subsequence
   Compile: gcc program_218.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <string.h>
// LCS using DP table: O(m*n)
int main(){
    char a[]="ABCBDAB", b[]="BDCABA";
    int m=strlen(a), n=strlen(b);
    int dp[m+1][n+1];
    for(int i=0;i<=m;i++) for(int j=0;j<=n;j++){
        if(!i||!j) dp[i][j]=0;
        else if(a[i-1]==b[j-1]) dp[i][j]=dp[i-1][j-1]+1;
        else dp[i][j]=dp[i-1][j]>dp[i][j-1]?dp[i-1][j]:dp[i][j-1];
    }
    printf("LCS length = %d\n",dp[m][n]);
    return 0;
}
