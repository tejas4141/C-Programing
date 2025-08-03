//10.	Write a program to find sum of x to y (both inclusive) 
#include<stdio.h>
int main()
{
    int x,y,sum=0,i;

    printf("Start num x and end num is y:");
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
    {
        printf("%d\n",i);
        sum=sum+i;
    }
    printf("Sum:%d\n",sum);
    return 0;
}