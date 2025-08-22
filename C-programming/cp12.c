// Write a c programs to display Simple interest.
//si = p*r*t
#include<stdio.h>
int main()
{
  float p,r,t;
  printf("Enter the pricipal amount : ");
  scanf("%f",&p);
  printf("Enter the interest rate amount : ");
  scanf("%f",&r);
  printf("Enter the time period : ");
  scanf("%f",&t);
  printf("Simple interest = %f",p*r*t);
}