// Generate prime numbers between two numbers.

#include <stdio.h>
int main(){
    int i,j,a,b,flag;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        flag=1;
        for(j=2;j<i;j++)
            if(i%j==0) flag=0;
        if(flag && i>1) printf("%d ",i);
    }
}
