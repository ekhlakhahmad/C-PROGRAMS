// Write a program to Swap two Value without Third Variable.

#include<stdio.h>
int main(){
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After Swapped First Number : %d", a);
    printf("\nAfter Swapped Second Number : %d", b);
    
    return 0;
}