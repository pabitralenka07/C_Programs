// Calculate salary using DA, HRA, TA.

#include <stdio.h>
int main(){
    float b,da,hra,ta,total;
    scanf("%f",&b);
    da=0.1*b; hra=0.2*b; ta=0.05*b;
    total=b+da+hra+ta;
    printf("Total Salary=%.2f",total);
}
