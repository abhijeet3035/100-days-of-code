/*Q32: Write a program to check if a number is a palindrome.

Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    int temp = (int)n;
    int rev = 0;
    while (temp > 0)
    {
        int d = temp % 10;
        rev = rev * 10 + d;
        temp = temp / 10;
    }
    temp =  (int) n;

    printf("reverse = %d", rev);
    if (temp == rev)
        printf("\nNumber is palindrome");
    else
        printf("\nNumber is not palindrome");

    return 0;
}