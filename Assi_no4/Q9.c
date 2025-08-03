//9.	Write a program to find sum of 1 to N (sum of first N numbers) (with and without loop) 
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Sum:%d",sum);
    return 0;
}