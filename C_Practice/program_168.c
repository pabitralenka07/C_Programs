/* Program 168: Array of Pointers
   Compile: gcc program_168.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Array of pointers – each element points to a different variable
int main() {
    int a = 1, b = 2, c = 3;
    int *arr[] = {&a, &b, &c};
    for (int i = 0; i < 3; i++)
        printf("%d ", *arr[i]);
    printf("\n");
    return 0;
}
