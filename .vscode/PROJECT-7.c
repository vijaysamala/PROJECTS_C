#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void checkpalindrome(char str[])
{
    int i, j, flag = 0;
    int len = strlen(str);
    for(i = 0, j = len - 1; i < len / 2; i++, j--) 
    {
        if(str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
        printf("%s is a palindrome.\n", str);
    else
        printf("%s is not a palindrome.\n", str);
}