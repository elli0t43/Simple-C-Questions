/* 4. Write a C program that will take three sides of a triangle and check if its valid triangle or not */

#include<stdio.h>

int main() {
    int A, B, C;
    printf("Enter A: ");
    scanf("%d", &A);
    
    printf("Enter B: ");
    scanf("%d", &B);
    
    printf("Enter C: ");
    scanf("%d", &C);
    
    if ((A+B)>=C && (B+C)>=A && (A+C)>=B){
        printf("It is a valid triangle");
    }
    else {
        printf("It isn't a valid triangle");
    }
    return 0;
}