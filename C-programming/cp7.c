// Accept temperatures in Fahrenheit (F) and print it in Celsius(C) and Kelvin (K) (Hint: C=5/9(F-32),
// K = C +  273.15)

#include<stdio.h>
int main()
{
  float fa,c,k;
  printf("Enter the temperature in fahrenheit : ");
  scanf("%f",&fa);
  c= (5.0/9.0)*(fa-32.0);
  k = c +273.15;
  printf("The temperature in celsius = %f",c);
  printf("\nThe temperature in Kelvin = %f",k);
}
