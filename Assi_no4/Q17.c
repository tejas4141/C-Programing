//17.	Write a program to find sum of even numbers from 1 to N (or odd numbers) 
 

#include<stdio.h>
int main()
{
    int i,j,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
      
    }
      printf("%d",sum);
    return 0;
}