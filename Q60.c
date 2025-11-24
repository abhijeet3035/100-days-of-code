/*Q60: Count positive, negative, and zero elements in an array.

/*
Sample Test Cases:
Input 1:
5
-1 0 1 2 -2
Output 1:
Positive=2, Negative=2, Zero=1

*/

#include <stdio.h>

int main() 
{
    int n,positive_count=0,negative_count=0,zero_count=0;
    printf("Enter number of elements in the array :");
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter the %d entry of the array ",i+1);
        scanf("%d",&a[i]);
        if(a[i]>0)
        {
            positive_count++;
        }
        else if(a[i]<0)
        {
            negative_count++;
        }
        else
        {
            zero_count++;
        }
        
    }
    printf("Positive : %d \tNegative : %d \tZeroes :%d",positive_count,negative_count,zero_count);
    
    return 0;
}
