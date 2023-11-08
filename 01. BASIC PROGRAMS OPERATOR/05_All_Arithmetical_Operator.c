// Write a program to implementation of All Arithmetical Operation like: addition, subtraction, multiplication, division, and remainder.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter Two Number: ");
    scanf("%d%d", &a, &b);

    int add = a + b;
    int sub = a - b;
    int mul = a * b;
    int div = a / b;
    int rem = a % b;

    printf("Addition = %d", add);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", mul);
    printf("\nDivision = %d", div);
    printf("\nRemainder = %d", rem);
}