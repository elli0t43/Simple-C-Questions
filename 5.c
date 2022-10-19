/* 5. Write a C program that will compute the sum of two numbers. if the sum is below or =20 it will display the sum. */

#include<stdio.h>
 
int main() {
      
    int A, B, sum;
    
    printf("Enter the first number: ");
    scanf("%d", &A);
    
    printf("Enter the second number: ");
    scanf("%d", &B);
     
    sum = A + B;
     
    if (sum<=20) {
        printf("%d", sum);
    }
    else {
        printf("The sum is above 20");
    }
      
    return 0;
}