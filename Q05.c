//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

#include<stdio.h>
int main(){
    float celsius,fahrenheit;
    printf("Enter temprature in celsius :");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temprature in Fahrenheit is :%f",fahrenheit);
}
