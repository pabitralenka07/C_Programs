// Linear search.

#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5},key=3,i;
    for(i=0;i<5;i++)
        if(a[i]==key) printf("Found");
}
