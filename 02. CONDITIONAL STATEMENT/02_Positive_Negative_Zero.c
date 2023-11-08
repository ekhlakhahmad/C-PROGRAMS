// Write a program to check the given number is Positive, Negative or Zero.

#include<stdio.h>
int main(){
    int a;
    printf("Enter any Number: ");
    scanf("%d", &a);

    if(a > 0)
        printf("Positive Number");

    else if(a < 0)
        printf("Negative Number");

    else
        printf("Zero");

    return 0;
}