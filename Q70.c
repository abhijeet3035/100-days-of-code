/*Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include<stdio.h>

int main()
{
    int n,k;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array :",i+1);
        scanf("%d",&a[i]);
    }
    
    printf("Enter the number of positions by which the array is to be rotated to the right");
    scanf("%d",&k);
    
    for(int i=0;i<k;i++)
    {
        b[i]=a[n-k+i];
    }
    
    for(int i=k;i<n;i++)
    {
        b[i]=a[i-k];
    }
    
    for(int i=0;i<n;i++)
    {
        printf("%d\t",b[i]);
    }
    return 0;
}