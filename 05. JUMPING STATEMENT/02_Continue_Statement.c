// Write a program to print Odd Number from 1 to 100.

#include<stdio.h>
int main(){
    int i;
    for(i = 0; i <= 100; i++){
        if(i % 2 == 0)
            continue;
        printf("%d \n", i);
    }
}