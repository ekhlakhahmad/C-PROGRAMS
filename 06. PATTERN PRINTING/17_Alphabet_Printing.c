/* Write a program to print the following pattern

E D C B A
E D C B
E D C 
E D
E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <= 'E'; i++){
        for(char j = 'E'; j >= i; j--){
            printf("%c",j);
        }
        printf("\n");
    }
}