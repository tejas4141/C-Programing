//8.	Write a program to find sum of 100 to 150 
#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=100;i<=150;i++)
    {
        // printf("%d\n",i);
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}