//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include<stdio.h>
int main(){
    int secondstotal,hours,minutes,seconds;
    printf("Enter time in seconds :");
    scanf("%d",&secondstotal);
    hours=secondstotal/3600;
    minutes=(secondstotal/60)-(hours*60);
    seconds=secondstotal-(hours*3600)-(minutes*60);
    printf("Time:%d:%d:%d",hours,minutes,seconds);
}