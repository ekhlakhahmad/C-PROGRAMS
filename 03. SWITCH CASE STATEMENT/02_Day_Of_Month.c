// Write a program to input day of months and print how much day in given number of a months.

#include<stdio.h>
int main(){
    int m;
    int y;
    printf("Enter months: ");
    scanf("%d", &m);

    switch (m)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("31 Days");
        break;

    case 4: case 6: case 9: case 11:
        printf("30 Days");
        break;

    case 2:
        printf("Enter Year: ");
        scanf("%d", &y);

        if(y % 4 == 0)
            printf("29 Days");
        
        else
            printf("28 days");
        break;
    
    default:
        printf("Invalid Number");
        break;
    }
}