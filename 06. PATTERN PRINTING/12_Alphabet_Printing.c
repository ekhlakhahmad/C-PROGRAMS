/* Write a program to print the following pattern

A A A A A
B B B B B
C C C C C
D D D D D
E E E E E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <= 'E'; i++){
        for(char j = 'A'; j <= 'E'; j++){
            printf("%c",i);
        }
        printf("\n");
    }
}