// Write a program to print Table of the given number.

#include<stdio.h>
int main(){
    int n, i, table = 1;
    printf("Enter any Number: ");
    scanf("%d", &n);

    printf("Table of %d \n", n);

    for(i = 1; i <= 10; i++){
        table = n * i;
        printf("%d x %d = %d \n ", n, i, table);
    }
}