/* Write a program to print the following pattern

A
A B
A B C
A B C D
A B C D E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <= 'E'; i++){
        for(int j = 'A'; j <= i; j++){
            printf("%c",j);
        }
        printf("\n");
    }
}