// Write a program to Swap two value using third variable.

#include<stdio.h>
int main(){
    int a, b, temp;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapped First Number : %d \n", a);
    printf("After Swapped Second Number : %d", b);

    return 0;
}