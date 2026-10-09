/* Program 170: Dynamic Structure Allocation
   Compile: gcc program_170.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
#include <stdlib.h>
// Dynamically allocate a structure on the heap
struct Student {
    int id;
    float grade;
};
int main() {
    struct Student *p = (struct Student*) malloc(sizeof(struct Student));
    p->id = 101;
    p->grade = 95.5f;
    printf("ID: %d Grade: %.1f\n", p->id, p->grade);
    free(p);
    return 0;
}
