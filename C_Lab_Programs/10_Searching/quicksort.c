// Write a program to perform Quick Sort on an array.

#include <stdio.h>

void quick(int a[], int l, int r) {
    if (l < r) {
        int i = l, j = r;
        int pivot = a[l];
        int temp;

        while (i < j) {
            while (i <= r && a[i] <= pivot) i++;
            while (a[j] > pivot) j--;

            if (i < j) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        temp = a[l];
        a[l] = a[j];
        a[j] = temp;

        quick(a, l, j - 1);
        quick(a, j + 1, r);
    }
}

int main() {
    int a[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    quick(a, 0, n - 1);

    printf("Sorted array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
