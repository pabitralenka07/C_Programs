// Program 03

// ort a given set o f n integer elements using Merge Sort method and compute its time complexity.Run the program for varied values of n› 5000 and record the time taken t o sort.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,j;
void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    for(i=0; i<n1; i++){
        L[i] = arr[left + i];
    }
    for(j=0; j<n2; j++){
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = R[j];
        j++;
        k++;
    }
    free(L);
    free(R);

}
void recursive_merge_sort(int arr[], int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        recursive_merge_sort(arr, left, mid);
        recursive_merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
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
    recursive_merge_sort(arr, 0, n-1);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC * 1000;
    printf("Time taken by merge sort: %.2f seconds\n", cpu_time_used);

    free(arr);
    return 0;
}
