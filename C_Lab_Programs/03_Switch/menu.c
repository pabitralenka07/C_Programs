// Menu driven program for total and average.

#include <stdio.h>
int main(){
    int a,b,c,d,ch;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    scanf("%d",&ch);
    switch(ch){
        case 1: printf("Sum=%d",a+b+c+d); break;
        case 2: printf("Avg=%d",(a+b+c+d)/4); break;
        default: printf("Invalid");
    }
}
