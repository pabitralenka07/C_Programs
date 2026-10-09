// Q12. Write a C program to implement Linear Search

#include <stdio.h>

int main(){
    int a[5]={10,20,30,40,50}, key=30;

    for(int i=0;i<5;i++)
        if(a[i]==key){
            printf("Found at %d",i);
            return 0;
        }

    printf("Not Found");
}
