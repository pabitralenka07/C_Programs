// Q13. Write a C program to implement Binary Search

#include <stdio.h>

int main(){
    int a[5]={10,20,30,40,50}, key=30;
    int low=0, high=4, mid;

    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==key){
            printf("Found at %d",mid);
            return 0;
        }
        else if(a[mid]<key) low=mid+1;
        else high=mid-1;
    }

    printf("Not Found");
}
