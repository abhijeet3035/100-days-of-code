/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>

int main()
{
    char num[100];
    int count[10],max_freq=0;
    
    printf("Enter the number:");
    scanf("%s",&num);
    
    for(int i=0;i<10;i++)
    {
        count[i]=0;
    }
    
    for(int i=0; num[i]!='\0';i++)
    {
        if((num[i]>='0') && (num[i]<='9'))
        {
            int temp=num[i]-'0';
            count[temp]++;
        }
        else
        {
            printf("The input should only contain digits");
            return 2;
        }
    }
    
    int result;
    for(int i=0;i<10;i++)
    {
        if (count[i]>max_freq)
        {
            max_freq=count[i];
            result=i;
        }
    }
    
    printf("%d",result);
    
    return 0;
}