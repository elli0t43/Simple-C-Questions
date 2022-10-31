/* 2. Write a C progrma to calculate the area of circle and the circumference of a circle. */

#include<stdio.h>
#define pi 3.14

int main() {
    float radius, PI, area, circumference;
    PI = pi;
    
    printf("Enter the radius: ");
    scanf("%f", &radius);
    
    area = (PI*radius*radius);
    printf("The area: %f\n", area);
    
    circumference = (2*PI*radius);
    printf("The circumference: %f", circumference);
    
    return 0;
}