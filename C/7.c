/* 7. Write a C program that will calculate the area of triangle who's 3 sides are given / user input. */

#include <stdio.h>
#include <math.h>

int main()
{
  float A, B, C, s, Area;
  
  printf("Enter the first side: ");
  scanf("%f",&A);
  printf("Enter the second side: ");
  scanf("%f",&B);
  printf("Enter the third side: ");
  scanf("%f",&C);  
  s = (A + B + C)/2;
  Area = sqrt(s * (s - A) * (s - B) * (s - C));
   
  printf("\n Area of the triangle: %f", Area);

  return 0;
}