/* Write a program to print the following pattern

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <= 'E'; i++){
        for(char j = 'A'; j <= 'E'; j++){
            printf("%c",j);
        }
        printf("\n");
    }
}