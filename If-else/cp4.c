// 4. Accept a lowercase character from the user and check whether the character is a vowel or consonant. 
// (Hint: a, e, i, o, u are vowels
#include<stdio.h>
int main()
{
  char ch ;
  printf("Enter the lowe-case character : ");
  scanf("%c",&ch);
  if(ch == 'a')
    printf("it is VOWEL");
  else if(ch == 'e')
    printf("it is VOWEL");
  else if(ch == 'i')
    printf("it is VOWEL");
  else if(ch == 'o')
    printf("it is VOWEL");
  else if(ch == 'u')
    printf("it is VOWEL");
  else
    printf("it is Consonant");
  return 0;
}