#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    int dym;
    float result,resultm, D, M;
    D = 2.54;
    M = 2,32166;
    setlocale(LC_ALL, "RUS");
    puts("Введите значения для расчета");
    scanf("%d", &dym);
    result = D * dym;
    resultm = M * dym;
    printf("%d дюймов - это %.1f см\n", dym, result);
    printf("%d pulgada - это %.1f см\n", dym, resultm);
    
}