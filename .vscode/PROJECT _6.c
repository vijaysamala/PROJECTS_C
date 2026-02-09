#include  <stdio.h>
#include  <stdlib.h>   
#include  <string.h>
#include <math.h>

void checkprimenumber(int n)
{  
    int i, flag = 0;
    for( i = 2 ; i <n; i++)
    {
        if(n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if( flag == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);
    }
int main()
{
    int n;
    printf("This program checks if a number is prime or not.\n");
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    checkprimenumber(n);
    return 0;
}