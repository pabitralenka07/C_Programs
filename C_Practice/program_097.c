/* Program 97: Recursion Fibonacci
   Compile: gcc program_097.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Nth Fibonacci number using recursion
// fib(0)=0, fib(1)=1, fib(n)=fib(n-1)+fib(n-2)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("%d\n", fib(7));
    return 0;
}
