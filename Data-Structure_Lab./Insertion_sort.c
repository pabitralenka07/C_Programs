// Write a C program to perform Insertion Sort

#include <stdio.h>

void insertionSort(int arr[], int n) {
int i, key, j;
for (i = 1; i < n; i++) {
key = arr[i];
j = i - 1;
while (j >= 0 && arr[j] > key) {
arr[j + 1] = arr[j];
j--;
}
arr[j + 1] = key;
}
}
void printArray(int arr[], int n) {
for (int i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
int main() {
int arr[100], n, i;
printf("Enter number of elements: ");
scanf("%d", &n);
printf("Enter %d elements: ", n);
for (i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Original array: ");
printArray(arr, n);
insertionSort(arr, n);
printf("Sorted array: ");
printArray(arr, n);
return 0;
}
