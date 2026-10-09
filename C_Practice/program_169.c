/* Program 169: Pointer to Structure
   Compile: gcc program_169.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Access structure members via pointer using -> operator
struct Student {
    int id;
    char name[20];
};
int main() {
    struct Student s = {1, "Alice"};
    struct Student *p = &s;
    printf("ID: %d, Name: %s\n", p->id, p->name);
    return 0;
}
