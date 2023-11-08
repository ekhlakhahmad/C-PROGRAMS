// Write a program to check the number is Even or Odd.

#include<stdio.h>
int main(){
    int a;
    printf("Enter any Number: ");
    scanf("%d", &a);

    if(a % 2 == 0)
        printf("Even Number");
    else
        printf("Odd Number");
}