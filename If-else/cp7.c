// 7. Write a C program to accept a character and invert the case of it.
#include<stdio.h>
int main()
{
  char ch ;
  printf("Enter the Character : ");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
    printf("%c",ch+32);
  else
    printf("%c",ch-32);
  return 0;
}