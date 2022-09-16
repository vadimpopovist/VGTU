#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    int a, b;
    a=3;
    b=5;
    
    puts("-------------------\n");
    puts("|  a*b|  a+b|. a-b|\n");
    puts("-------------------\n");
    printf("|%2d*%2d|%2d+%2d|%2d-%2d|\n", a, b, a, b, a, b);
    puts("-------------------\n");
    printf("|%5d|%5d|%5d|\n", a*b, a+b, a-b);
    puts("-------------------\n");
    
    
    
}