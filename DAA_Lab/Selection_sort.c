// Program 01

//  Sort a given set of n integer elements using Selection Sort method and compute its time complexity. Run the program for varied values o f n> 5000 and record the time taken to sort. 

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int i,j;
void selection_sort(int arr[], int n){
    for(i=0; i<n-1; i++){
        int min_index = i;
        for(j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void generate_random_array(int arr[], int n){
    srand(time(0));
    for(i=0; i<n; i++){
        arr[i] = rand() % 10000;
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
    selection_sort(arr, n);
    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Time taken by selection sort: %.2f seconds\n", cpu_time_used);

    free(arr);
    return 0;
}
