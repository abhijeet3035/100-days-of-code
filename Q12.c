//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include<stdio.h>
int main(){
    int a;
    printf("Enter Integer :");
    scanf("%d",&a);
    if(a>=0){
        if(a==0){
            printf("Number is zero");
        }
        else{
            printf("Number is Even");
        }
    }
    else{
        printf("Number is Negative");
    }
}