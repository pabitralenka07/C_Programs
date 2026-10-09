/* Program 143: Count Sort
   Compile: gcc program_143.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Counting sort for non-negative integers: O(n+k)
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int max = 0;
    for (int i=0;i<n;i++){ scanf("%d",&arr[i]); if(arr[i]>max) max=arr[i]; }
    int count[max+1];
    for (int i=0;i<=max;i++) count[i]=0;
    for (int i=0;i<n;i++) count[arr[i]]++;
    for (int i=0;i<=max;i++)
        while(count[i]--) printf("%d ",i);
    printf("\n");
    return 0;
}
