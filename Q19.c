//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides of Triangle");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c||b+c>a||c+a>b){
        if(a==b&&b==c&&c==a){
        printf("Equilateral Triangle");
        }
        else if(a==b||b==c||c==a){
        printf("Isosceles Triangle");
        }
        else{
        printf("Scalene Triangle");
        }
    }
    else{
        printf("Triangle not valid");
    }
}