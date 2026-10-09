#include <stdio.h>

int main() {
    int n, i, largest, second;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d numbers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    largest = second = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > largest) {
            second = largest;
            largest = arr[i];
        } else if(arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    if (largest == second) {
        printf("No second largest number.\n");
    } else {
        printf("Second largest number is: %d\n", second);
    }

    return 0;
}
