// Insert element at position.

#include <stdio.h>
int main(){
    int a[10]={1,2,3,4},n=4,pos=2,val=99,i;
    for(i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=val;
    for(i=0;i<=n;i++) printf("%d ",a[i]);
}
