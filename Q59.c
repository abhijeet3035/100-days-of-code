/*Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include <stdio.h>

int main() 
{
    int n,even_count=0,odd_count=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array ",i+1);
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
        
    }
    printf("Number of even entries : %d \nNumber of odd entries : %d",even_count,odd_count);
    
    return 0;
}