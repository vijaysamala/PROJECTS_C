#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 void paritycheck(int num)
  { int one = 0 ,zero = 0, rem =0 ; 
     while(num > 0)
    {
        rem = num % 10 ; 
        if(rem == 0)
        {
            zero++ ; 
        }
        else
        {
            one++ ; 
        }
        num = num / 10 ; 
    }
    if( one % 2 == 0)
    {
        printf("The number is even parity\n") ; 
    }
    else
    {
        printf("The number is odd parity\n") ;
    }
  }


int main()
{    int num;
    char k; 
    do { 
    printf("Enter a number( using '0' and '1') : \n") ; 
    scanf("%d", &num) ; 
    paritycheck(num) ; 
    printf("Do you want to continue ? (y/n) : \n") ;
    scanf(" %c", &k) ;
    } while (k == 'y' || k == 'Y') ;
    return 0;
}