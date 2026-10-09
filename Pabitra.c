#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int a[], int low, int high)
{
    int pivot = a[low];
    int i = low;
    int j = high;

    while (i < j)
    {
        while (a[i] <= pivot && i < high)
        {
            i++;
        }

        while (a[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[low], &a[j]);
    return j;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int j = partition(a, low, high);
        quickSort(a, low, j - 1);
        quickSort(a, j + 1, high);
    }
}

void generateRandomArray(int arr[], int n)
{
    srand(time(0));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100000;
    }
}

int main()
{
    int n;

    printf("Enter the number of elements (n > 5000): ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    generateRandomArray(arr, n);

    clock_t start, end;
    double cpu_time_used;

    start = clock();

    quickSort(arr, 0, n - 1);

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;

    printf("Time taken by Quick Sort: %.2f milliseconds\n", cpu_time_used);

    free(arr);

    return 0;
}
