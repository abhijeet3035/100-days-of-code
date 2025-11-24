/*Q58: Find the maximum and minimum element in an array.

/*
Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10

*/
#include<stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array:",i+1);
        scanf("%d",&a[i]);
    }
    
    int max=a[0],min=a[0];
    for(int j=1;j<n;j++)
    {
        if(a[j]>max)
        {
            max=a[j];
        }
        
        else if(a[j]<min)
        {
            min=a[j];
        }
    }
    
    printf("Max :%d  Min :%d",max,min);
    
    
    return 0;
}