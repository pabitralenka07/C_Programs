// #include<stdio.h>
// #include<conio.h>
// int main( )
// {
//     int i,j,n;
//     printf("Enter terms:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=i;j++)
//         {
//             printf("🖕");
//         }
//         printf("\n");
//     }
//     getch( );
// }


#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 2; j <= i; j++) {
            printf("👀");
        }
        // printf("\n");
    }

    return 0;
}
