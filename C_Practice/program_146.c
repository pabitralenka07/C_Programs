/* Program 146: Majority Element
   Compile: gcc program_146.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Boyer-Moore voting algorithm for majority element
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++) scanf("%d",&arr[i]);
    int candidate=arr[0], count=1;
    for(int i=1;i<n;i++){
        if(arr[i]==candidate) count++;
        else if(--count==0){ candidate=arr[i]; count=1; }
    }
    // Verify
    int freq=0;
    for(int i=0;i<n;i++) if(arr[i]==candidate) freq++;
    if(freq>n/2) printf("Majority: %d\n",candidate);
    else printf("No majority\n");
    return 0;
}
