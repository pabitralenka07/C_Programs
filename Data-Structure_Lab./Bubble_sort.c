// Write a C program to perform Bubble Sort.

#include <stdio.h>
void bubbleSort(int arr[], int n) {
int i, j, temp;
for (i = 0; i < n - 1; i++) {
for (j = 0; j < n - i - 1; j++) {
if (arr[j] > arr[j + 1]) {
temp = arr[j];
arr[j] = arr[j + 1];
arr[j + 1] = temp;
}
}
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
bubbleSort(arr, n);
printf("Sorted array: ");
printArray(arr, n);
return 0;
}
