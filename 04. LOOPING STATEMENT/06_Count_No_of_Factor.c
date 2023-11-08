// Write a program to count number of Factors of the given Number.

#include<stdio.h>
int main(){
    int i, n, factor = 0;

    printf("Enter any Number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        if(n % i == 0){
            factor = factor + 1;
        }
    }

    printf("Sum of Factor = %d", factor);

    return 0;
}