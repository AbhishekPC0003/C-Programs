// 8. Write the program to display 5 employee details with their Employee_Name, Employee_id and 
// department.
#include<stdio.h>
struct employee
{
  char name[20];
  int empid;
  char dept[20]; 
};
typedef struct employee emp;

int main()
{
  emp Employee[2];

  for(int i =0;i<2;i++)
  {
    printf("Enter the name of Employee %d: ",i+1);
    scanf("%s",Employee[i].name);
    printf("Enter the id of Employee %d: ",i+1);
    scanf("%d",&Employee[i].empid);
    printf("Enter the name of department Employee %d: ",i+1);
    scanf("%s",Employee[i].dept);
  }
  printf("Details of Employess : ");
  for (int i = 0; i < 2; i++)
  {
    printf("\n name of Employee %d  = %s",i+1,Employee[i].name);
    printf("\n id of Employee %d  = %d",i+1,Employee[i].empid);
    printf("\n name of department of Employee %d  = %s",i+1,Employee[i].dept);
  }
  

} 