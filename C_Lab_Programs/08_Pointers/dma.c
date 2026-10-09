// Dynamic memory allocation.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,n=5,i;
    p=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++) scanf("%d",&p[i]);
    for(i=0;i<n;i++) printf("%d ",p[i]);
}
