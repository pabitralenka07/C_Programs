//  Write a C program to implement Binary Search.

#include <stdio.h>
int binarySearch(int arr[], int n, int key)
{
int low = 0, high = n - 1;
while (low <= high)
{
int mid = (low + high) / 2;
if (arr[mid] == key)
{
return mid;
}
else if (arr[mid] < key)
{
low = mid + 1; 
}
else {
high = mid - 1;
}
}
return -1; 
}
int main() {
int n, key, result;
printf("Enter number of elements: ");
scanf("%d", &n);
int arr[n];
printf("Enter %d sorted elements:\n", n);
for (int i = 0; i < n; i++) {
scanf("%d", &arr[i]);
}
printf("Enter the element to search: ");
scanf("%d", &key);
result = binarySearch(arr, n, key);
if (result != -1)
printf("Element %d found at index %d\n", key, result);
else
printf("Element %d not found in array\n", key);
return 0;
}
