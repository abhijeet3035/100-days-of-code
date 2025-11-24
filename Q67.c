/*Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/
#include<stdio.h>

int main() 
{
    int n,n2,pos;
    printf("Enter the number of elements in the array :");
    scanf("%d",&n);
    int a[n],b[n+1];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i);
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to add:");
    scanf("%d",&n2);
    
    printf("Enter the index where you want to add the element :");
    scanf("%d",&pos);
    b[pos]=n2;
    for(int i=0;i<pos;i++)
    {
        b[i]=a[i];
    }
    for(int j= pos+1;j<=n;j++)
    {
        b[j]=a[j-1];
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d\t",b[i]);
    }
    
    return 0;
}