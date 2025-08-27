//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

#include<stdio.h>
#include<math.h>
int main(){
    float principal,rate,time,si,ci;
    printf("Enter principal amount :");
    scanf("%f",&principal);
    printf("Enter rate :");
    scanf("%f",&rate);
    printf("Enter time :");
    scanf("%f",&time);
    si=(principal*rate*time)/100;
    ci=principal*pow((1+rate/100),time)-principal;
    printf("simple interest :%f",si);
    printf("\ncompound interest :%f",ci);
}