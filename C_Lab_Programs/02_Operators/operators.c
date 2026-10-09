// Test logical, bitwise, unary and ternary operators.

#include <stdio.h>
int main(){
    int a=5,b=3;
    printf("Logical AND=%d\n",a&&b);
    printf("Bitwise AND=%d\n",a&b);
    printf("Unary=%d\n",++a);
    printf("Ternary=%d",(a>b)?a:b);
}
