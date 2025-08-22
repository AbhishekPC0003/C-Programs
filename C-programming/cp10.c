// 10. Accept program for Area and Perimeter Of Rectangle
#include<stdio.h>
#define area(l,w) l*w
#define perimeter(l,w) 2*(l+w)
int main()
{
  float l,w;
  printf("Enter the length of rectangale : ");
  scanf("%f",&l);
  printf("Enter the width of rectangale : ");
  scanf("%f",&w);
  printf("Area of rectangale = %f",area(l,w));
  printf("\nPerimeter of rectangale = %f",perimeter(l,w));
  return 0;
}