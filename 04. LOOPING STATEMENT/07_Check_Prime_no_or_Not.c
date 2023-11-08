// Write a program to  check the number is Prime or Not.

#include<stdio.h>
int main(){
    int i, n, factor = 0;

    printf("Enter any Number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0)
            factor = factor + 1;
    }

    if(factor == 2)
        printf("Prime Number");

    else
        printf("Not a Prime Number");

    return 0;
}