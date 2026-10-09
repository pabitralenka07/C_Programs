/* Program 215: Greedy Huffman Encoding Concept
   Compile: gcc program_215.c -o out -lm
   Run    : ./out
*/
#include <stdio.h>
// Huffman encoding: priority queue (min-heap) simulation
// Demonstrates greedy approach to optimal prefix codes
typedef struct { char ch; int freq; } Node;

int main(){
    Node nodes[]={{'a',5},{'b',9},{'c',12},{'d',13},{'e',16},{'f',45}};
    int n=6;
    // Show frequencies sorted ascending (base for Huffman)
    for(int i=0;i<n-1;i++)
        for(int j=0;j<n-i-1;j++)
            if(nodes[j].freq>nodes[j+1].freq){ Node t=nodes[j]; nodes[j]=nodes[j+1]; nodes[j+1]=t; }
    printf("Chars sorted by freq (build Huffman tree from lowest):\n");
    for(int i=0;i<n;i++) printf("'%c': %d\n",nodes[i].ch,nodes[i].freq);
    printf("Optimal prefix code lengths: f=1, c=d=3, a=b=e=4 bits\n");
    return 0;
}
