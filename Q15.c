//Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.

#include<stdio.h>
int main(){
    char a;
    printf("Enter character :");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("Lowercase letter");
    }
    else if(a>='A' && a<='Z'){
        printf("Uppercase letter");
    }
    else if(a>='0' && a<='9'){
        printf("Digit");
    }
    else{
        printf("Special character");
    }
}