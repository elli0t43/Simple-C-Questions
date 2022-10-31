/* 6 Write a C program that will print the largest number among the 3 given numbers. */

#include<stdio.h>

int main() {
     
    int A, B, C;
    
    printf("Enter the first number: ");
    scanf("%d", &A);
    
    printf("Enter the second number: ");
    scanf("%d", &B);
    
    printf("Enter the third number: ");
    scanf("%d", &C);
     
    if (A>B){
        if (A>C) {
            printf("First number is the largest");
        }
        else {
            printf("Third number is the largest");
        }
    }
    else if (B>C) {
        printf("Second number is the largest");
    }
    else {
        printf("Third number is the largest");
    }
     
    return 0;
}