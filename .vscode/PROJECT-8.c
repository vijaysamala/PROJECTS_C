#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void armstrongnum( int num)
{
    int originalNum, remainder, result = 0, n = 0;
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
}