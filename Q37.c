/*Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include<stdio.h>
 
 int main()
 {
     int a,b,temp,num1,num2;
     printf("Enter the two numbers \n");
     scanf("%d %d",&a,&b );
     num1=a;
     num2=b;
     while (b!=0)
     {
         temp =b;
         b=a%b;
         a=temp;
     }
     
     printf("HCF is %d",a);
     printf("\nLCM is %d",(num1*num2)/a);
     return 0;
     
 }