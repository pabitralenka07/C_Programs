// Q11. Write a C program to perform Merge Sort

#include <stdio.h>

void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=l,temp[10];

    while(i<=m && j<=r)
        temp[k++]=(a[i]<a[j])?a[i++]:a[j++];

    while(i<=m) temp[k++]=a[i++];
    while(j<=r) temp[k++]=a[j++];

    for(i=l;i<=r;i++) a[i]=temp[i];
}

void mergesort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}

int main(){
    int a[5]={5,3,1,4,2};
    mergesort(a,0,4);

    for(int i=0;i<5;i++) printf("%d ",a[i]);
}
