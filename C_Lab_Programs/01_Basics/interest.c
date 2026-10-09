// Write a program to calculate simple and compound interest.

#include <stdio.h>
#include <math.h>

int main(){
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    printf("SI=%.2f\n",(p*r*t)/100);
    printf("CI=%.2f",p*pow((1+r/100),t)-p);
}
