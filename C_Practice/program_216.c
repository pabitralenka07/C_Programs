/* Program 216: DP Fibonacci Memoization
   Compile: gcc program_216.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#define MAX 100
// Fibonacci with memoization (top-down DP): O(n) time, O(n) space
long long memo[MAX];

long long fib(int n){
    if(n<=1) return n;
    if(memo[n]!=-1) return memo[n];
    return memo[n]=fib(n-1)+fib(n-2);
}
int main(){
    for(int i=0;i<MAX;i++) memo[i]=-1;
    int n; scanf("%d",&n);
    printf("%lld\n",fib(n));
    return 0;
}
