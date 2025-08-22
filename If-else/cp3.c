// 3. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules.
// Basic: < 1, 50,000 Tax = 0
// 1, 50,000 to 3,00,000 Tax = 20%
// > 3,00,000 Tax = 30%

#include<stdio.h>
int main()
{
  int baseSal;
  printf("Enter the Basic Salary of Employee : ");
  scanf("%d",&baseSal);
  if(baseSal<150000)
    printf("No income tax\nTax = 0");
  else if(baseSal>= 150000 && baseSal<=300000)
    printf("Tax = %0.2f",(float)baseSal*20/100);
    else if(baseSal>300000)
      printf("Tax = %0.2f",(float)(baseSal*30/100));
}