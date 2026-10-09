// Program 11

// Design and implement C Program to find a subset o f a given set S = {SI, S2,..., Sn} o f n positive integers whose SUM is equal t o a given positive integer d. For example, if S = (1, 2 , 5 , 6 , 8) and d = 9 , there are two solutions (1, 2 , 6) and (1, 8). Display a suitable message, if the given problem instance doesn't have a solution.

#include <stdio.h>

#define MAX 100

int found = 0;

void printSubset(int subset[], int size) {
    printf("{ ");
    for (int i = 0; i < size; i++) {
        printf("%d ", subset[i]);
    }
    printf("}\n");
}

void findSubsets(int S[], int subset[], int n, int subsetSize,
    int total, int index, int target) {

    if (total == target) {
        printSubset(subset, subsetSize);
        found = 1;
        return;
    }

    if (index == n || total > target)
        return;

    subset[subsetSize] = S[index];
    findSubsets(S, subset, n, subsetSize + 1,
                total + S[index], index + 1, target);

    findSubsets(S, subset, n, subsetSize,
                total, index + 1, target);
}

int main() {
    int S[MAX], subset[MAX];
    int n, target;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &S[i]);
    }

    printf("Enter target sum: ");
    scanf("%d", &target);

    printf("\nSubsets with sum %d are:\n", target);

    findSubsets(S, subset, n, 0, 0, 0, target);

    if (!found) {
        printf("No subset with the given sum exists.\n");
    }

    return 0;
}
