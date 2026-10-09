/* Program 14: Area of Rectangle
   Compile: gcc program_014.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate area of rectangle
int main() {
    float l, b;
    scanf("%f %f", &l, &b);
    printf("Area = %.2f\n", l * b);
    return 0;
}
