/* Program 39: Armstrong Number
   Compile: gcc program_039.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <math.h>
// Check Armstrong number (e.g. 153 = 1^3 + 5^3 + 3^3)
int main() {
    int n, temp, sum = 0, digits = 0;
    scanf("%d", &n);
    temp = n;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) {
        int d = temp % 10;
        sum += (int)pow(d, digits);
        temp /= 10;
    }
    printf(sum == n ? "Armstrong\n" : "Not Armstrong\n");
    return 0;
}
