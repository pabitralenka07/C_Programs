// Program 02

// Sort a given set of n integer elements using Quick Sort method and compute its time complexity.Run the program for varied values of n > 5000 and record the time taken t o sort.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,j;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low, j = high;
    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i < j){
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[low], &arr[j]);
    return j;
}

void QUICKSORT(int arr[], int low, int high){
    if(low < high){
        int j = partition(arr, low, high);
        QUICKSORT(arr, low, j - 1);
        QUICKSORT(arr, j + 1, high);
    }
}

void generate_random_array(int arr[], int n){
    srand(time(0));
    for(i=0; i<n; i++){
        arr[i] = rand() % 100000;
    }
}

int main(){
    int n;
    printf("Enter the number of elements(n > 5000): ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    generate_random_array(arr, n);
    clock_t start ,end;
    double cpu_time_used;
    start = clock();
    QUICKSORT(arr, 0, n - 1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
    printf("Time taken by quick sort: %.2f seconds\n", cpu_time_used);

    free(arr);
    return 0;
}
