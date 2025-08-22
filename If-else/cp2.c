// 2. Write a program to accept a number and check if it is divisible by 5 and 7
#include<stdio.h>
int main()
{
  int num;
  printf("Enter a number : ");
  scanf("%d",&num);
  num%5==0 && num%7==0 ? printf("Number is divisibale by 5 and 7 both"):printf("Number is not divisibale by 5 and 7");
  return 0;
}