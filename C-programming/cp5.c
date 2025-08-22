// 5. Accept two numbers and swap two numbers using
// i) Third variable
// ii) By performing arithmetic operations

#include<stdio.h>

void swapWithThiredVariable(int* num1,int* num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swapWithArithemtcOperation(int* num1,int* num2)
{
  *num1 = *num1 + *num2;
  *num2 = *num1 - *num2;
  *num1 = *num1 - *num2;
}

int main()
{
  int num1,num2;
  printf("Enter value of Number 1  : ");
  scanf("%d",&num1);
  printf("Enter value of Number 2  : ");
  scanf("%d",&num2);
  // swapWithThiredVariable(&num1,&num2);
  swapWithArithemtcOperation(&num1,&num2);
  printf("Value of Number 1 : %d",num1);
  printf("\nValue of Number 2 : %d",num2);
}