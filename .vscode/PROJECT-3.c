#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void Halfadder(int a,int b)
{ int sum,carry;
 sum = (a^b);
 carry = (a&b);
 printf("your sum of hslfadder :%d\n your carry of halfadder:%d\n",sum,carry);
}
int main()
{
	char k;
do 
{ int a,b;
printf("WELCOME TO THE HALFADDER OPERATION..!\n");
printf("**--------HALF ADDER----------***\n");
printf("Enter your first input (0 or 1)\n");
scanf("%d",&a);
printf("Enter your second input(0 or 1)\n");
scanf("%d",&b);
printf("Here is your output\n"); 
Halfadder(a,b);
printf("Do you want to try again?,(y/n)\n");
scanf("%c",&k);
}while(k == 'y'|| k== 'Y');
printf("OPERSTION ENDED......!");}