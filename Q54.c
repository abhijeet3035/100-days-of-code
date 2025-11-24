/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=i;j<4;j++)
        {
            printf(" ");
        }
        
        for(int k=1;k<=2*i-1;k++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    
    for(int i=3;i>=1;i--)
    {
        for(int j=i;j<4;j++)
        {
            printf(" ");
        }
        
        for(int k=1; k<=2*i-1;k++)
        {
            printf("%c",'*');
        }
        printf("\n");
    }
    
    return 0;
}