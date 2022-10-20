/* 9. Write a C program that will calculate the avg of 10 numbers where the 10 numbers will be given by the user. */

#include<stdio.h>

int main() {
     
    int num, sum=0, i;
    float avg;
    
    for (i=1;i<=10;i++){
        printf("Enter the number(%d): ", i);
        scanf("%d", &num);
        
        sum += num;
    
    }
    
    avg = sum/10;
    
    printf("The average is : %d", avg);
     
    return 0;
}