//20.	Write a program to check whether given character is a digit or a character in lowercase or uppercase alphabet.
//  (Hint ASCII value of digit is between 48 to 58 and Lowercase characters have ASCII values in the range of 97 to122,
//  uppercase is between 65 and 90) 

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character :");
    scanf("%c",&ch);

    if(ch>=65 && ch<90){
    printf("Cappital Letter");
    }else if(ch>=97 && ch<=122){
        printf("Small Letter");
    }else if(ch>=48 && ch<=58){
        printf("Digits");

    }else{
        printf("Special character");
    }
    return 0;
   
}
