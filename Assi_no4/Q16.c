//16.	Write a program to find sum of even numbers from 100 to 200 (or odd numbers) 
 
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<=200;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    printf("%d\n",sum);
    return 0;
}