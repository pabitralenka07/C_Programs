/* Program 15: Celsius to Fahrenheit
   Compile: gcc program_015.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Convert Celsius to Fahrenheit
int main() {
    float c;
    scanf("%f", &c);
    printf("Fahrenheit = %.2f\n", (c * 9.0 / 5.0) + 32);
    return 0;
}
