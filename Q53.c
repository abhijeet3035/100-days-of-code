/*Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

/*
Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*

*/
#include <stdio.h>

int main() 
{
    for(int i=0;i<=4;i++)
    {
        for(int j=1;j<=2*i+1;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    
    for(int i=3;i>=1;i--)
    {
        for(int j=1;j<=2*i+1;j++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    
    return 0;
}