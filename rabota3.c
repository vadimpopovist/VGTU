#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
  int num;
  float nub;
  int dr;
  
  setlocale(LC_ALL, "RUS");
  puts("Введите два числа");
  scanf("%d", &num);
  scanf("%f", &nub);
  dr = nub;
  printf("Введено число %d\n", num);
  printf("Введено число %f\n", nub);
  printf("сумма введенных чисел %f\n", num +nub);
  printf("разность введенных чисел %f\n", num-nub);
  printf("остаток от деления %d\n", num %dr );
  printf("частное %f\n", num / nub); 
  
  
}