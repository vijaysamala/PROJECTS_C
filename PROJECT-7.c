#include <stdio.h>
#include <math.h>
#include <stdlib.h> 

void plaindrome(int n)
{ int rem = 0 , rev;
 while(n!=0)
 { rem = n%10;
   rev = rev*10 + rem;
   n = n/10;
 }
 printf("The reverse of the number is :%d\n",rev);
 if(rev == n)
  printf("The number is a palindrome\n");
 else
  printf("The number is not a palindrome\n");
}

int main()
{ char k; 
do
{ int n;
printf("WELCOME TO THE PALINDROME CHECKER..!\n");
printf("**--------PALINDROME CHECKER----------***\n");
printf("Enter your number\n");
scanf("%d",&n);
printf("Here is your output\n");
plaindrome(n);
printf("Do you want to try again?,(y/n)\n");
scanf("%c",&k);
}while(k == 'y'|| k== 'Y');
printf("OPERSTION ENDED......!");}  