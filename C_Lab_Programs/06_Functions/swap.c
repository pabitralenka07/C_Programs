// Swap two numbers using function.

#include <stdio.h>
void swap(int *a,int *b){
    int t=*a; *a=*b; *b=t;
}
int main(){
    int x=5,y=10;
    swap(&x,&y);
    printf("%d %d",x,y);
}
