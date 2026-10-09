/* Program 212: Greedy Fractional Knapsack
   Compile: gcc program_212.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Fractional knapsack: maximize value with weight limit
typedef struct { float value,weight,ratio; } Item;

int main(){
    Item items[]={{60,10,0},{100,20,0},{120,30,0}};
    int n=3; float capacity=50, totalValue=0;
    // compute ratio
    for(int i=0;i<n;i++) items[i].ratio=items[i].value/items[i].weight;
    // sort by ratio desc (bubble)
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(items[j].ratio<items[j+1].ratio){ Item t=items[j]; items[j]=items[j+1]; items[j+1]=t; }
    for(int i=0;i<n&&capacity>0;i++){
        if(items[i].weight<=capacity){ totalValue+=items[i].value; capacity-=items[i].weight; }
        else { totalValue+=items[i].ratio*capacity; capacity=0; }
    }
    printf("Max value = %.2f\n",totalValue);
    return 0;
}
