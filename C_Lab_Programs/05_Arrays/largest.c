// Find largest, smallest and average of array.

#include <stdio.h>
int main(){
    int a[5],i,max,min,sum=0;
    for(i=0;i<5;i++) scanf("%d",&a[i]);
    max=min=a[0];
    for(i=0;i<5;i++){
        if(a[i]>max) max=a[i];
        if(a[i]<min) min=a[i];
        sum+=a[i];
    }
    printf("Max=%d Min=%d Avg=%d",max,min,sum/5);
}
