// Program  04

// Write a program to solve Knapsack problem using Greedy method.

#include<stdio.h>

struct Item{
    int weight;
    int value;
    float ratio;
};

void swap(struct Item * a, struct Item * b){
    struct Item temp = * a;
    *a = *b;
    *b = temp;
}

int i,j;
void sort(struct Item arr[], int n){
    for(i=0; i<n-1; i++){
        for(j=i+1; j<n; j++){
            if(arr[i].ratio > arr[j].ratio){
                swap(&arr[j], &arr[i]);
            }
        }
    }
}

float knapsack(struct Item arr[], int n, int capacity){
    float totalValue = 0.0;
    for(i=0; i<n; i++){
        if(arr[i].weight <= capacity){
            totalValue += arr[i].value;
            capacity -= arr[i].weight;
        }
        else{
            totalValue += arr[i].value * ((float)capacity / arr[i].weight);
            break;
        }
    }
    return totalValue;
}

int main(){
    int n, capacity;
    printf("Enter the number of items: ");
    scanf("%d", &n);
    struct Item arr[n];
    for(i=0; i<n; i++){
        printf("Enter value and weight of item %d: ", i+1);
        scanf("%d %d", &arr[i].value, &arr[i].weight);
        arr[i].ratio = (float)arr[i].value / arr[i].weight;
    }
    printf("Enter the capacity of knapsack: ");
    scanf("%d", &capacity);
    sort(arr, n);
    float maxValue = knapsack(arr, n, capacity);
    printf("Maximum value in Knapsack = %.2f\n", maxValue);
    return 0;
}
