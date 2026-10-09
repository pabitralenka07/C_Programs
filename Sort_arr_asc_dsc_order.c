// Sorting an array in ascending and descending order having 10 elements.

#include <stdio.h>

int main() {
    int arr[10], i, j, temp;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < 9; i++) {
        for(j = i + 1; j < 10; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nAscending Order:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDescending Order:\n");
    for(i = 9; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int *arr;
//     int i, j, temp;

//     arr = (int*) malloc(10 * sizeof(int));

//     if(arr == NULL) {
//         printf("Memory allocation failed !");
//         return 1;
//     }

//     printf("Enter 10 elements:\n");
//     for(i = 0; i < 10; i++) {
//         scanf("%d", &arr[i]);
//     }

//     for(i = 0; i < 9; i++) {
//         for(j = i + 1; j < 10; j++) {
//             if(arr[i] > arr[j]) {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }

//     printf("\nAscending Order:\n");
//     for(i = 0; i < 10; i++) {
//         printf("%d ", arr[i]);
//     }

//     printf("\nDescending Order:\n");
//     for(i = 9; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }

//     free(arr);

//     return 0;
// }
