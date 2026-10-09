/* Program 144: Kadane Algorithm Max Subarray
   Compile: gcc program_144.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Kadane's algorithm: maximum subarray sum O(n)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n;i++) scanf("%d",&arr[i]);
    int maxSum=arr[0], curr=arr[0];
    for (int i=1;i<n;i++){
        curr = (arr[i]>curr+arr[i]) ? arr[i] : curr+arr[i];
        if(curr>maxSum) maxSum=curr;
    }
    printf("Max Subarray Sum = %d\n", maxSum);
    return 0;
}
