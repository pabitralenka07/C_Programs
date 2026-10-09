#include <iostream>
using namespace std;

// Function to calculate the average of an array
double calculateAverage(int arr[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum / size;
}

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[10];
    int size;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Input the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate the average of the array
    double average = calculateAverage(arr, size);

    // Find the maximum value in the array
    int max = findMax(arr, size);

    // Display the results
    cout << "The average of the array is: " << average << endl;
    cout << "The maximum value in the array is: " << max << endl;

    return 0;
}