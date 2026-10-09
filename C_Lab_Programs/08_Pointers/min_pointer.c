// Find smallest using pointer.

#include <stdio.h>
int main(){
    int a[5],i,*p=a,min;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    min=*p;
    for(i=0;i<5;i++)
        if(*(p+i)<min) min=*(p+i);
    printf("Min=%d",min);
}
