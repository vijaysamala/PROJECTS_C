#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int num,guess;
    srand(time(0));
    num = rand()%1000 +1;
   printf("-------welocome to the to the NUMBERGUESSING GAME-------\n");
    do {
        printf("Enter your guess number between 1 to 1000\n");
        scanf("%d",&guess);
        if(guess>num) {
            printf("lower number please\n");
        } else if(guess<num) {
            printf("higher number please\n");
        } else {
            printf("you guessed it right\n");
            printf("congratualations! you won1.......\n");
        }
    } while(guess!=num);
}
