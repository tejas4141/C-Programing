//18.	Write a program to find sum of even numbers from x to y (both inclusive)   (or odd numbers) 
 

#include<stdio.h>
int main()
{
    int x,y,i,sum=0;

    printf("Enter x and y:");
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
    {
        if(i%2==0)
        {
             sum=sum+i;
    }
        }
    
    printf("%d",sum);
    return 0;
}