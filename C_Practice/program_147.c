/* Program 147: Search in Rotated Sorted Array
   Compile: gcc program_147.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Binary search in rotated sorted array: O(log n)
int search(int arr[], int l, int r, int key){
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==key) return mid;
        if(arr[l]<=arr[mid]){
            if(key>=arr[l]&&key<arr[mid]) r=mid-1;
            else l=mid+1;
        } else {
            if(key>arr[mid]&&key<=arr[r]) l=mid+1;
            else r=mid-1;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,5,6,7,0,1,2};
    printf("Index: %d\n", search(arr,0,6,0));
    return 0;
}
