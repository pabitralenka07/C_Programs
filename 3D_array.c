// Example : 3D Array in C

#include <stdio.h>
int main(void){
    int arr3D[2][3][2] = {
        {
            {1, 2},
            {3, 4},
            {5, 6}
        },
        {
            {7, 8},
            {9, 10},
            {11, 12}
        }
    };

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            for(int k = 0; k < 2; k++) {
                printf("arr3D[%d][%d][%d] = %d\n", i, j, k, arr3D[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
