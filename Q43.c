/*Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() 
{
int n,sum=0,last;
do{
printf("Enter n ");
scanf("%d",&n);
} while(n<0);
int temp=n;
if (n==0)
{
    sum=1;
}

while(n!=0)
{
    int product =1;
    last = n%10;
    for(int i=1;i<=last;i++)
    {
        product*=i;
    }
    
    sum+=product;
    n=n/10;
}
if(sum==temp)
{
    printf("Strong number");
    
}
else
{
    printf("not strong");
}

    return 0;
}