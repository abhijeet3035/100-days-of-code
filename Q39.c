/*Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)

*/
#include<stdio.h>

int main()
{
    int n ,last,product=1;
    printf("Enter n \n");
    scanf("%d",&n);
    
    while(n!=0)
    {
        last=n%10;
        if(last%2==1)
        {
            product*=last;
        }
        n=n/10;
    }
    
    printf("%d",product);
    
    return 0;
}