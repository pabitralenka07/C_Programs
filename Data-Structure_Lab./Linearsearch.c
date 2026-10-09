// Write a C program to implement Linear Search.

#include <stdio.h>
int linearSearch(int arr[], int n, int key) 
{
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == key) 
        {
            return i;
        }
    }
    return -1; 
}

int main() 
{
    int n, key, result;
    int arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
    scanf("%d", &arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d", &key);
    result = linearSearch(arr, n, key);

    if (result == -1) 
    {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index %d : (position %d) \n", result, result + 1);
    }

return 0;
}
