// Write a program to check the person year is Eligible for votting or Not.

#include<stdio.h>
int main(){
    int y;
    printf("Enter your Year: ");
    scanf("%d", &y);

    if(y >= 18)
        printf("Yes, you are Eligible for Votting");
    
    else
        printf("No, you are not Eligible for Votting");

    return 0;
}