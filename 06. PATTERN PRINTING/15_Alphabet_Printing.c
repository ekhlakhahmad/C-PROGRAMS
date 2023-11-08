/* Write a program to print the following pattern

A
B B
C C C
D D D D
E E E E E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <= 'E'; i++){
        for(char j = 'A'; j <= i; j++){
            printf("%c",i);
        }
        printf("\n");
    }
}