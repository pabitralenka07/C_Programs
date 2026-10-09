/* Program 200: Queue Sliding Window Maximum Deque
   Compile: gcc program_200.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Sliding window maximum using deque: O(n)
int main(){
    int arr[]={1,3,-1,-3,5,3,6,7};
    int n=8, k=3;
    int deq[100], dfront=0, drear=0;
    for(int i=0;i<n;i++){
        // remove elements outside window
        while(dfront<drear && deq[dfront]<i-k+1) dfront++;
        // remove smaller elements from back
        while(dfront<drear && arr[deq[drear-1]]<=arr[i]) drear--;
        deq[drear++]=i;
        if(i>=k-1) printf("%d ",arr[deq[dfront]]);
    }
    printf("\n");
    return 0;
}
