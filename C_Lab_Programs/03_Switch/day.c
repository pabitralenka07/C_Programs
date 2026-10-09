// Display day of week using switch case.

#include <stdio.h>
int main(){
    int d; scanf("%d",&d);
    switch(d){
        case 1: printf("Sunday"); break;
        case 2: printf("Monday"); break;
        case 3: printf("Tuesday"); break;
        default: printf("Invalid");
    }
}
