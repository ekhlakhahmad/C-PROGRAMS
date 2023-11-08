// Write a program to check any year is Leap year or not.

#include<stdio.h>
int main(){
    int y;
    printf("Enter any Year: ");
    scanf("%d", &y);

    if(y % 4 == 0)
        printf("Leap Year");
    
    else
        printf("Not Leap Year");

    return 0;
}