/* Program 213: Greedy Coin Change Minimum Coins
   Compile: gcc program_213.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Greedy coin change (works for standard denominations)
int main(){
    int coins[]={1,5,10,25,50}, n=5;
    int amount;
    scanf("%d",&amount);
    int count=0;
    for(int i=n-1;i>=0&&amount>0;i--){
        while(amount>=coins[i]){ amount-=coins[i]; count++; }
    }
    printf("Minimum coins: %d\n",count);
    return 0;
}
