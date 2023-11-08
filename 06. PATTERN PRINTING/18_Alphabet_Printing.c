/* Write a program to print the following pattern

        A
      A B
    A B C
  A B C D
A B C D E

*/

#include<stdio.h>
int main(){
    for(char i = 'A'; i <='E' ; i++){
        for(char j = 'E'; j > i; j--){
            printf(" ");
        }

        for(char k = 'A'; k <= i; k++){
            printf("%c", k);
        }
        
        printf("\n");
    }
}