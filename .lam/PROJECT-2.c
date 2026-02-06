#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ANDgate( int a ,int b)
{ if ( (a&b) == 1){
	printf("YOU ARE GATE IS ON\n ");}
	else 
	{printf("YOU ARE GATE IS OFF\n");}
}
void ORgate( int a ,int b)
{ if ( (a|b) == 1){
	printf("YOU ARE GATE IS ON\n ");}
	else 
	{printf("YOU ARE GATE IS OFF\n");}
}
void XORgate( int a ,int b)
{ if ( (a^b)== 1){
	printf("YOU ARE GATE IS ON\n");}
	else 
	{printf("YOU ARE GATE IS OFF\n");}
}
void NOTgate(int a){
	if(a == 1)
	{ printf("YOU ARE GATE IS ON\n");}
	else 
	{printf("YOU ARE GATE IS OFF\n");}
}
int main()
{ printf("YOU ARE WELOCME !\n");
printf("**--------GATE OPERATIONS----------**\n");
printf("Choose your gate press \n 1.AND\n 2.OR\n 3.XOR\n 4.NOT\n");
int num;
char op;
scanf( "%d",&num);
int a,b;
printf("ENTER YOUR NUMBERS '0 or 1' \n");
printf("Your first number\n");
scanf("%d",&a);
if (num != 4 )
{printf("Your second number\n");
	 scanf("%d",&b);}
do 
{ switch(num)
{ case 1: 
       ANDgate(a,b);
      break;
   case 2:
       ORgate(a,b);
       break;
    case 3:
       XORgate(a,b);
       break;
      case 4:
        NOTgate(a);
        break;
       default: 
       printf("Invalid gate choice,try again!\n");
}

printf("Do you want to try agai?(y/n):");
scanf("%c",&op);
}while(op == 'Y'|| op == 'y');
printf("programme Ended ,Goodbyee");}

      
      





