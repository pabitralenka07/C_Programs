// Reverse an array having 10 elements.

#include <stdio.h>

int main() {
    int arr[10];
    int i, temp;

    printf("Enter 10 elements:");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 5; i++) {
        temp = arr[i];
        arr[i] = arr[9 - i];
        arr[9 - i] = temp;
    }

    printf("Reversed array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}