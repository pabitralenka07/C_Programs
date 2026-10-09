// Enter marks of 4 subjects and calculate total and average.

#include <stdio.h>
int main(){
    int m1,m2,m3,m4,total;
    float avg;
    scanf("%d%d%d%d",&m1,&m2,&m3,&m4);
    total=m1+m2+m3+m4;
    avg=total/4.0;
    printf("Total=%d Avg=%.2f",total,avg);
}
