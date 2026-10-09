//  Write a C program to perform Selection Sort.

#include <stdio.h>
void selectionSort(int arr[], int n) {
int i, j, minIndex, temp;
for (i = 0; i < n - 1; i++) {
minIndex = i;
for (j = i + 1; j < n; j++) {
if (arr[j] < arr[minIndex]) {
minIndex = j;
}
}
if (minIndex != i) {
temp = arr[i];
arr[i] = arr[minIndex];
arr[minIndex] = temp;
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
selectionSort(arr, n);
printf("Sorted array: ");
printArray(arr, n);
return 0;
}
