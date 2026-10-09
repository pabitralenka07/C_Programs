// Create an array store 5 float number and print them. 

#include <stdio.h>

int main() {
    float numbers[5];  
    int i;
    printf("Enter 5 float numbers:\n");
    for(i = 0; i < 5; i++) {
        scanf("%f", &numbers[i]);
    }
    printf("The number :\n");
    for(i = 0; i < 5; i++) {
        printf("%f\n", numbers[i]);
    }

    return 0;
}
