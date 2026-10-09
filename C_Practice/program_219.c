/* Program 219: DP Longest Increasing Subsequence
   Compile: gcc program_219.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// LIS using DP: O(n^2)
int main(){
    int arr[]={10,9,2,5,3,7,101,18};
    int n=8, dp[8], maxLen=1;
    for(int i=0;i<n;i++) dp[i]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++)
            if(arr[j]<arr[i]&&dp[j]+1>dp[i]) dp[i]=dp[j]+1;
        if(dp[i]>maxLen) maxLen=dp[i];
    }
    printf("LIS length = %d\n",maxLen);
    return 0;
}
