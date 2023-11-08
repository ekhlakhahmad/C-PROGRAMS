// Write a program to check the given number is Palindrome or Not.

#include<stdio.h>
int main(){
    int i, n, digit, reverse = 0;
    int original;

    printf("Enter any Number: ");
    scanf("%d", &n);

    original = n;

    while(n > 0){
        digit = n % 10;
        reverse = reverse * 10 + digit;
        n = n / 10;
    }

    if(original == reverse)
        printf("Palindrome Number");
    
    else
        printf("Not a Palindrome Number");

    return 0;
}