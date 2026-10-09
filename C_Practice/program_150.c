/* Program 150: Heap Sort
   Compile: gcc program_150.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Heap sort: O(n log n)
void heapify(int arr[], int n, int i){
    int largest=i, l=2*i+1, r=2*i+2;
    if(l<n&&arr[l]>arr[largest]) largest=l;
    if(r<n&&arr[r]>arr[largest]) largest=r;
    if(largest!=i){ int t=arr[i];arr[i]=arr[largest];arr[largest]=t; heapify(arr,n,largest); }
}
void heapSort(int arr[], int n){
    for(int i=n/2-1;i>=0;i--) heapify(arr,n,i);
    for(int i=n-1;i>0;i--){ int t=arr[0];arr[0]=arr[i];arr[i]=t; heapify(arr,i,0); }
}
int main(){
    int arr[]={3,1,4,1,5,9,2,6};
    heapSort(arr,8);
    for(int i=0;i<8;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
