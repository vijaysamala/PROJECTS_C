#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int _2_1_mux(int a , int b , int sel){
    if(sel == 0){
        return a;
    }
    else if(sel == 1){
         return b;
    }
} 
 int _4_1_mux(int a,int b ,int c,int d,int sel_1,int sel_2){
    int num1,num2,num3;
             num1 = _2_1_mux(a,b,sel_1);
             num2 = _2_1_mux(c,d,sel_1);
             num3 = _2_1_mux(num1,num2,sel_2);
             return num3;}
 int _8_1_mux(int a,int b ,int c,int d,int e,int f,int g,int h,int sel_1,int sel_2,int sel_3){
    int num1,num2,num3;
             num1 = _4_1_mux(a,b,c,d,sel_1,sel_2);
             num2 = _4_1_mux(e,f,g,h,sel_1,sel_2);
             num3 = _2_1_mux(num1,num2,sel_3);
             return num3;}

int main(){ 
    int num,try;
    printf("WELCOME TO MULTIPLEXER OPERATIONS\n");
    printf("*****______MULTIPLEXERS______*****\n");
    printf(" \n");
    do { 
    printf("ENTER YOUR MULTIPLEXER\n 1. 2:1\n 2. 4:1\n 3. 8:1\n");
    scanf("%d",&num);
    if(num == 1){ printf("ENTER THE VALUES OF A AND B(0 or 1)\n");
    int a,b,sel;
    scanf("%d %d",&a,&b);
    printf("ENTER THE SELECTOR VALUE(0 or 1)\n");
    scanf("%d",&sel);
    int result = _2_1_mux(a,b,sel);
    printf("THE OUTPUT OF 2:1 MUX IS %d",result);
    }
    else if(num == 2){ printf("ENTER THE VALUES OF A , B , C AND D(0 or 1)\n"); 
        int a,b,c,d,sel_1,sel_2;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        printf("ENTER THE SELECTOR VALUES (0 or 1)\n");
        scanf("%d %d" ,&sel_1,&sel_2);
        int result = _4_1_mux(a,b,c,d,sel_1,sel_2);
        printf("THE OUTPUT OF 4:1 MUX IS %d",result);
    }
    else if(num == 3){ printf("ENTER THE VALUES OF A , B , C , D , E , F , G AND H(0 or 1)\n"); 
        int a,b,c,d,e,f,g,h,sel_1,sel_2,sel_3;
        scanf("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
        printf("ENTER THE SELECTOR VALUES (0 or 1)\n");
        scanf("%d %d %d" ,&sel_1,&sel_2,&sel_3);
        int result = _8_1_mux(a,b,c,d,e,f,g,h,sel_1,sel_2,sel_3);
        printf("THE OUTPUT OF 8:1 MUX IS %d",result);
    }
    else{ printf("INVALID INPUT\n");}
    printf("\nDO YOU WANT TO CONTINUE? (1 for YES and 0 for NO)\n");
    scanf("%d",&try);
    } while(try == 1);
    printf("THANK YOU FOR USING THE MULTIPLEXER OPERATIONS\n");
    return 0;}