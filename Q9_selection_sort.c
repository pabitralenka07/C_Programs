// Q9. Write a C program to perform Selection Sort

#include <stdio.h>

int main(){
    int a[5]={5,3,1,4,2}, i,j,min,temp;

    for(i=0;i<5;i++){
        min=i;
        for(j=i+1;j<5;j++)
            if(a[j]<a[min]) min=j;

        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(i=0;i<5;i++) printf("%d ",a[i]);
}
