/* Program 145: Two Sum Problem
   Compile: gcc program_145.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Find pair with given sum: O(n^2) approach
int main() {
    int n, target;
    scanf("%d %d", &n, &target);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(arr[i]+arr[j]==target)
                printf("Pair: %d + %d\n",arr[i],arr[j]);
    return 0;
}
