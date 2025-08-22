// Accept the basic salary of an employee and compute the net salary after adding earnings and subtracting 
// deductions.
// PF is 2 % of basic 
// Tax is 3 % of basic 
// HRA is 5 % basic 
// DA is 8 % of basic

#include<stdio.h>
float totalSalry(float sal);
int main()
{
  float sal ;
  printf("Enter the Basic Salary of Employee : ");
  scanf("%f",&sal);
  printf("Total Salary of Employee will be = %f",totalSalry(sal));
  return 0;
}
float totalSalry(float sal)
{
  float totalSal =0 ;
  totalSal = sal - (sal * 2 /100) -  (sal * 3/100) +  (sal * 5/100) + (sal * 8/100) ;
  // printf("%f",totalSal);
  return totalSal;
}