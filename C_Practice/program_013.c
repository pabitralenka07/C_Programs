/* Program 13: Area of Circle
   Compile: gcc program_013.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Calculate area of circle
#define PI 3.14159
int main() {
    float r;
    scanf("%f", &r);
    printf("Area = %.2f\n", PI * r * r);
    return 0;
}
