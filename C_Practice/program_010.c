/* Program 10: Leap Year Check
   Compile: gcc program_010.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Check if a year is a leap year
int main() {
    int year;
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Leap Year\n");
    else
        printf("Not Leap Year\n");
    return 0;
}
