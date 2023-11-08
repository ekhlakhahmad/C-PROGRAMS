/* Write a program to print the following pattern

5 4 3 2 1
5 4 3 2 
5 4 3
5 4
5

*/

#include<stdio.h>
int main(){
    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            printf("%d",j);
        }
        printf("\n");
    }
}