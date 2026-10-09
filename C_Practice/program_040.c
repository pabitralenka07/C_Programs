/* Program 40: Strong Number
   Compile: gcc program_040.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Strong number: sum of factorial of digits equals the number (e.g. 145)
int main() {
    int n, temp, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp) {
        int d = temp % 10;
        int fact = 1;
        for (int i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    printf(sum == n ? "Strong Number\n" : "Not Strong Number\n");
    return 0;
}
