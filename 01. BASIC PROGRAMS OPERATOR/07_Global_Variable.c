#include<stdio.h>
int a = 10;
int main(){
    int a = 20;
    {
        extern int a;
        printf("\n %d", a);
    }
    printf("\n %d", a);
    return 0;
}