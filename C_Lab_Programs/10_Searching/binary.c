// Binary search.

#include <stdio.h>
int main(){
    int a[5]={1,2,3,4,5},l=0,h=4,m,key=3;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==key){ printf("Found"); break; }
        else if(a[m]<key) l=m+1;
        else h=m-1;
    }
}
