//Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.

#include<stdio.h>
int main(){
    char a;
    printf("Enter character :");
    scanf("%c",&a);
    if(a>='a' || a<='z'){
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
    else if(a>='A' || a<='Z'){
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }
    }
}