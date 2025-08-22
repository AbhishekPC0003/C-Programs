// Write a C program to check whether a entered character is uppercase or lowercase alphabet
#include<stdio.h>
int main()
{
  char ch;
  printf("Enter the character : ");
  scanf("%c",&ch);
  if(ch >='A' && ch<='Z')
    printf("Upper Case");
  else 
    printf("Lower Case");
}