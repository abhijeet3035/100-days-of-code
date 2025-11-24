/*Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include <stdio.h>

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
for(int j=n-1;j>=0;j--)
{
    printf("%d\t",a[j]);
}

    return 0;
}