// Find the sequence of each element in the array.

#include <stdio.h>

int main() {
    int arr[10], i, j, count;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 10; i++) {
        count = 1;

        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }

        printf("Element %d occurs %d times\n", arr[i], count);
    }

    return 0;
}
