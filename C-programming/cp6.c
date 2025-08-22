// 6. Accept dimensions of a cylinder and print the surface area and volume (Hint: surface area = 2πr 2 + 2πrh, 
// volume = π r 2 h). Define a constant variable pi=3.14
#include<stdio.h>
#define surfaceAreaCyl(r,h) (2*3.14*r)*(r+h)
#define volumeCyl(r,h) 3.14*r*r*h
int main()
{
  float r,h;
  printf("Enter the height and raidus of Cylinder : ");
  scanf("%f %f",&h,&r);
  printf("Surface area of Cylinder = %f",surfaceAreaCyl(r,h));
  printf("Volume of Cylinder = %f",volumeCyl(r,h));
  return 0;
}