// 8. Write a program to accept 3 numbers and compute minimum and maximum from them.
#include<stdio.h>
int main()
{
  int num1 , num2, num3;
  printf("Enter the 3 numbers : ");
  scanf("%d%d%d",&num1,&num2,&num3);
  if(num1>num2 && num2>num3)
    printf("%d is maximum ",num1);
  else if(num2>num1 && num2>num3)
  printf("%d is maximum",num2);
  else
    printf("%d is maximum",num3);
}