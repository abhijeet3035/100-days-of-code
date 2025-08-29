//Q18: Write a program to assign grades based on a percentage input.

#include<stdio.h>
int main(){
    int percent;
        printf("Enter percentage :");
    scanf("%d",&percent);
    if(percent>=91){
        printf("Your grade is A ");
    }else if(percent>=81){
        printf("Your grade is B");
    }else if(percent>=71){
        printf("Your grade is C ");
    }else if(percent>=61){
        printf("Your grade is D ");
    }else if(percent>=51){
        printf("Your grade is E ");
    }else
        printf("Your grade is F ");
    
}