// Write a program to find the Greatest number from Three given number.

#include<stdio.h>
int main(){
    int a, b, c;
    printf("Enter any Three Number: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a > b && a > c)
        printf("%d is Greatest Number", a);

    else if(b > a && b > c)
        printf("%d is Greatest Number", b);

    else
        printf("%d is Greatest Number", c);
}