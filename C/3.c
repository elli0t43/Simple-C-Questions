/* 3. Write a C program to check whether a given number is positive or negative. */

#include<stdio.h>

int main() {
    int number;
    printf("Enter the number: ");
    scanf("%d", &number);
        
    if (number > 0){
        printf("It is a positive number.");
    }
    else {
        printf("It is a negative number.");
    }
    return 0;
}