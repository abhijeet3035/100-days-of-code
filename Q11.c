//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

#include<stdio.h>
int main(){
    int a;
    printf("Enter Integer:");
    scanf("%d",&a);
    if(a%2==0){
        printf("Even Number");
    }
    if(a%2!=0){
        printf("Odd Number");}
}