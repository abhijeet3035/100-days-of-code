//Q21: Write a program to display the month name and number of days using switch-case for a given month number.

#include<stdio.h>
int main(){
    int m;
    printf("Enter number (1-12) :");
    scanf("%d",&m);
    switch(m){
        case 1:
        printf("January\n31 Days");
        break;
        case 2:
        printf("February\n28 Days");
        break;
        case 3:
        printf("March\n31 Days");
        break;
        case 4:
        printf("April\n30 Days");
        break;
        case 5:
        printf("May\n31 Days");
        break;
        case 6:
        printf("June\n30 Days");
        break;
        case 7:
        printf("July\n31 Days");
        break;
        case 8:
        printf("August\n31 Days");
        break;
        case 9:
        printf("September\n30 Days");
        break;
        case 10:
        printf("October\n31 Days");
        break;
        case 11:
        printf("November\n30 Days");
        break;
        case 12:
        printf("December\n31 Days");
        break;
    }
}