// Q8. Write a C program to perform Insertion Sort

#include <stdio.h>

int main(){
    int a[5]={5,3,1,4,2}, i,j,key;

    for(i=1;i<5;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }

    for(i=0;i<5;i++) printf("%d ",a[i]);
}
