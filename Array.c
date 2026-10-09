// Write a program to find out the 2nd largest number of an array of n integers

#include <stdio.h>
int main ()
{
    int n,i,largest,second ;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter %d no.s :", n);
    for(i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
    largest = second = arr[0] ;

    for (i = 1;i < n;i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }
    printf("Second largest no. is: %d \n", second);
    return 0;
}
