#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void fulladder(int a ,int b,int input)
{ 
    int sum,carry;
    sum = (a^b^input);
    carry = ((a&b)+((a^b)&input));
     printf("your sum of fulladder:%d\nyour carry of fulladder:%d\n",sum,carry);
}
int main() 
{   printf("WELOCME TO FULLADDER OPERATIONS\n");
    printf("******-_-_-_-_FULLADDER-_-_-_-_-*******\n");
    char k;
    do 
    {
     int a ,b , input;
    printf( "ENTER YOUR FIRST INPUT(0 or 1):\n");
    scanf("%d",&a);
    printf("ENTER YOUR SECOND INPUT(0 or 1):\n");
    scanf("%d",&b);
    printf("ENTER YOUR INPUT CARRY(0 or 1):\n");
    scanf("%d",&input);
    fulladder(a,b,input);
    printf("DO YOU WANT TO TRY AGAIN?,(y/n)\n");
    scanf("%c",&k);
    }while((k=='y') || (k=='Y'));
printf("PROGRAMME ENDED........!");
}
