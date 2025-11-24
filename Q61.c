/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() 
{
    int n,b,index,p=0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
{
    printf("Enter the %d entry of the array:",i);
    scanf("%d",&a[i]);
}

printf("Enter the element to be searched:");
scanf("%d",&b);

for(int j=0;j<n;j++)
{
    if(a[j]==b)
    {
        index =j;
        printf("Element found at %d index",index);
        p++;
        break;    
    }
}
if(p==0)
{
    printf("Element not found");
}

    return 0;
}