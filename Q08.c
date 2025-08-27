//Q8: Write a program to find and display the sum of the first n natural numbers.

#include<stdio.h>
int main(){
    int n,i,sum;
    printf("Enter value :");
    scanf("%d",&n);
    sum=0;
    for(i=1;i<=n;i++)
   { sum=sum+i;
    }
    printf("%d",sum);
}
