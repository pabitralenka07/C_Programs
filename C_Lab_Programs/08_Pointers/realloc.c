// Demonstrate realloc and free.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p;
    p=(int*)malloc(3*sizeof(int));
    p=(int*)realloc(p,5*sizeof(int));
    free(p);
}
