// Create an array of size 10 take the input of 10 number from user and then print.

#include <stdio.h>

int main() {
    int arr[10];
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number [%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The numbers entered are:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
