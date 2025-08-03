//12.	Write a program to print even numbers from 100 to 150 (or numbers) 
#include<stdio.h>
int main()
{
    int i;
    for(i=100;i<=150;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}