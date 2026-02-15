#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include <math.h>

void DTB( int num) 
{ 
    int rem = 0, i = 0, binary[100] ; 
    while(num > 0)
    {
        rem = num % 2 ; 
        binary[i] = rem ; 
        num = num / 2 ; 
        i++ ; 
    }
    printf("The binary representation is : \n") ;
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]) ; 
    }
    printf("\n") ;
}

 int main()
{    int num;
    char k; 
    do { 
    printf("Enter a number : \n") ; 
    scanf("%d", &num) ; 
    DTB(num) ; 
    printf("Do you want to continue ? (y/n) : \n") ;
    scanf(" %c", &k) ;
    } while (k == 'y' || k == 'Y') ;
    return 0;
}