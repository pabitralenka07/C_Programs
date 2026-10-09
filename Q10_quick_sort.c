// Q10. Write a C program to perform Quick Sort

#include <stdio.h>

void quick(int a[],int low,int high){
    int i=low,j=high,pivot=a[low],temp;

    while(i<j){
        while(a[i]<=pivot) i++;
        while(a[j]>pivot) j--;
        if(i<j){
            temp=a[i]; a[i]=a[j]; a[j]=temp;
        }
    }
    temp=a[low]; a[low]=a[j]; a[j]=temp;

    if(low<j) quick(a,low,j-1);
    if(j<high) quick(a,j+1,high);
}

int main(){
    int a[5]={5,3,1,4,2};
    quick(a,0,4);

    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
