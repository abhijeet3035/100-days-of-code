//Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include<stdio.h>
int main(){
    float p,l,cp,sp,percentage;
    printf("Enter cost price");
    scanf("%f",&cp);
    printf("Enter selling price");
    scanf("%f",&sp);
    if(sp>cp){
    printf("Profit\n");
    p=sp-cp;
    percentage=(p/cp)*100;
    printf("Percentage is %f",percentage);
    }
    else if(cp>sp){
    printf("Loss\n");
    l=cp-sp;
    percentage=(l/cp)*100;
    printf("Percentage is %f",percentage);
    }
    else{
    printf("No profit No loss");
    }
}