// String palindrome using pointer.

#include <stdio.h>
#include <string.h>
int main(){
    char str[20]; scanf("%s",str);
    int i,len=strlen(str),flag=1;
    for(i=0;i<len/2;i++)
        if(*(str+i)!=*(str+len-1-i))
            flag=0;
    printf(flag?"Palindrome":"Not");
}
