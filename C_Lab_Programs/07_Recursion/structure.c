// Student structure example.

#include <stdio.h>
struct student{
    int id; char name[20];
};
int main(){
    struct student s={1,"ABC"};
    printf("%d %s",s.id,s.name);
}
