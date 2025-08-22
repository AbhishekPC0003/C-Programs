// 5. Write a C program to input angles of a triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
  float a1,a2,a3;
  printf("Enter the angales of triangle : ");
  scanf("%f %f %f",&a1,&a2,&a3);
  if(a1+a2+a3== 180.00)
    printf("Given angales are vaild for a triangle");
  else  
    printf("Given Angales are not valid for triangle");
}