// Fibonacci using function.

#include <stdio.h>
void fib(int n){
    int a=0,b=1,c,i;
    for(i=0;i<n;i++){
        printf("%d ",a);
        c=a+b; a=b; b=c;
    }
}
int main(){
    fib(10);
}
