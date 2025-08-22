// Accept marks of 5 subjects (out of 100) of a student and display total marks and compute the 
// percentage also.

#include<stdio.h>
int main()
{
  int sub1,sub2,sub3,sub4,sub5;
  printf("Enter the marks of Subject 1 to 5 resp : ");
  scanf("%d %d %d %d %d",&sub1,&sub2,&sub3,&sub4,&sub5);
  // scanf("%d",&sub1);
  // printf("Enter the marks of Subject 2 : ");
  // scanf("%d",&sub2);
  // printf("Enter the marks of Subject 3 : ");
  // scanf("%d",&sub3);
  // printf("Enter the marks of Subject 4 : ");
  // scanf("%d",&sub4);
  // printf("Enter the marks of Subject 5 : ");
  // scanf("%d",&sub5);

  int total = sub1 + sub2 + sub3 + sub4 + sub5 ;
  printf("Total marks obtained = %d",total);
  printf("\nPercentage obtained = %0.2f",(float)(total*100)/500);
  return 0;
}