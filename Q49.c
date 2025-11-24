/*Q49: Write a program to print the following pattern:
5
45
345
2345
12345

/*
Sample Test Cases:
Input 1:

Output 1:
5
45
345
2345
12345

*/
#include<stdio.h>

int main()
{
    int a=5;
    for(int i=1;i<=5;i++)
    {
        for (int j=a;j<=5;j++)
      {
         printf("%d",j);
      }
      a--;
      printf("\n");
    }
    return 0;
}