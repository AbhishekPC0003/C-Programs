// . Accept the radius from user and compute the area and circumference of a circle
#include<stdio.h>
#define area(r) 3.14f*r*r
#define cirumference(r) 2*3.14f*r
int main()
{
  float radius=0;
  printf("Enter the radius of circle : ");
  scanf("%f",&radius);
  printf("Area of circle with given radius of %f = %f",radius,area(radius));
  printf("\nCircumference of circle with given radius of %f = %f",radius,cirumference(radius));
  return 0;
}