/* Program 142: Quick Sort
   Compile: gcc program_142.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Quick sort: O(n log n) avg, O(n^2) worst
int partition(int arr[], int low, int high) {
    int pivot=arr[high], i=low-1;
    for(int j=low;j<high;j++)
        if(arr[j]<pivot){ i++; int t=arr[i];arr[i]=arr[j];arr[j]=t; }
    int t=arr[i+1];arr[i+1]=arr[high];arr[high]=t;
    return i+1;
}
void quickSort(int arr[], int low, int high) {
    if(low<high){ int pi=partition(arr,low,high); quickSort(arr,low,pi-1); quickSort(arr,pi+1,high); }
}
int main() {
    int arr[]={4,3,2,1,5};
    quickSort(arr,0,4);
    for(int i=0;i<5;i++) printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
