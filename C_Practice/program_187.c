/* Program 187: Stack Next Greater Element
   Compile: gcc program_187.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Next greater element for each array element using stack: O(n)
int main(){
    int arr[]={4,5,2,10,8};
    int n=5, stack[100], top=-1, nge[5];
    for(int i=0;i<n;i++) nge[i]=-1;
    for(int i=0;i<n;i++){
        while(top>=0&&arr[stack[top]]<arr[i]){
            nge[stack[top--]]=arr[i];
        }
        stack[++top]=i;
    }
    for(int i=0;i<n;i++) printf("%d->%d  ",arr[i],nge[i]);
    printf("\n");
    return 0;
}
