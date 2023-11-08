// Write a program to calculate Reverse a Number.

#include<stdio.h>
int main(){
    int i, n, digit, reverse = 0;

    printf("Enter any Number: ");
    scanf("%d", &n);

    for(; n > 0; n = n / 10){
        digit = n % 10;
        reverse = reverse * 10 + digit;
    }

    printf("Reverse Number is %d", reverse);

    return 0;
}