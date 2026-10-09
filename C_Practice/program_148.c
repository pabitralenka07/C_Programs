/* Program 148: Sliding Window Maximum
   Compile: gcc program_148.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sliding window: max in each window of size k O(n*k)
int main(){
    int n, k;
    scanf("%d %d",&n,&k);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    for(int i=0;i<=n-k;i++){
        int max=arr[i];
        for(int j=1;j<k;j++)
            if(arr[i+j]>max) max=arr[i+j];
        printf("%d ",max);
    }
    printf("\n");
    return 0;
}
