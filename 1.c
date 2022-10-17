/* 1. Write a C program to read two sides of a retangale and cacculate the area, perimeter*/

#include<stdio.h>

int main() {
    int length, width, area, perimeter;
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the side width: ");
    scanf("%d", &width);
    
    area = length*width; 
    printf("The area: %d\n", area);
    
    perimeter = (2*(length + width));
    printf("The perimeter: %d", perimeter);
    
    return 0;
}