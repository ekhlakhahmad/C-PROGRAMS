// Write a program to accept an integer from the keyboard and print the number when it is multiplied by 2.

#include<stdio.h>
int main(){
    int x;
    printf("Please Enter the Integer Value: ");
    scanf("%d", &x);
    printf("\n Your Entered Value is %d", x);
    printf(" And its Double Value is %d", 2*x);
    return 0;
}