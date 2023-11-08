// Write a program to print counting 1 to 100 but counting terminated after 50.

#include<stdio.h>
int main(){
    int i;
    for(i = 1; i <= 100; i++){
        if(i == 50)
            break;
        
        printf("%d \n", i);
    }

}