// Queue using array

#include <stdio.h>

int q[5], f=0, r=-1;

void insert(int x){
    if(r == 4)
        printf("Overflow\n");
    else
        q[++r] = x;
}

void delete(){
    if(f > r)
        printf("Underflow\n");
    else
        printf("Deleted: %d\n", q[f++]);
}

int main(){
    insert(10);
    insert(20);
    delete();
    return 0;
}