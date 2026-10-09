/* Program 12: Simple Interest
   Compile: gcc program_012.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate simple interest
int main() {
    float p, r, t;
    scanf("%f %f %f", &p, &r, &t);
    printf("SI = %.2f\n", (p * r * t) / 100);
    return 0;
}
