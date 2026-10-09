// Prog-1 Add a Number to a Static Array

#include <stdio.h>
int main(){
    int arr[100];
    int n,i,newElement,position;
    printf("Enter number of elements (max 100) : ");
    scanf("%d",&n);
    printf("Enter %d elements : \n",n);

    for(i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the new element to insert :");
    scanf("%d",&newElement);
    printf("Enter position to insert (0 to %d) :",n);
    scanf("%d",&position);

    for(i=n ; i>position ; i--){
        arr[i] = arr[i-1];
    }
    arr[position] = newElement;
    n++;
    printf("Array after insertion : \n");

    for(i=0 ; i<n ; i++){
        printf("%d \n",arr[i]);
    }
    printf("\n");
    return 0;

}
