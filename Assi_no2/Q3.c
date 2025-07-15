//3.	Write a program to check whether given number is even or odd (with if and conditional operator ?:)? 
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    (num%2==0)?printf("Even"):printf("Odd"); //conditional ? operator 
    return 0;  
}