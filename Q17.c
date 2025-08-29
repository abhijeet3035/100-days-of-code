//Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d,r1,r2;
    printf("enter the value of a,b,c\n");
    scanf("%d %d %d",&a,&b,&c);
    d=(b*b)-(4*a*c);
    printf("Discriminant is %d",d );
    if(d>0){
        printf("\nroots are real and different");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("\nroots are %d %d",r1,r2);
    } else if(d==0){
    printf("\nroots are real and same");
    r1=(-b+sqrt(d))/(2*a);
    printf("\nroot is %d",r1);
    } else {
        printf("\nroots are complex");
    }
} 