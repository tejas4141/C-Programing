//6.	Write a program to print x to y (both inclusive) 
#include<stdio.h>
int main()
{
    int x,y,i;
    printf("Start with x and end with y:");
    scanf("%d%d",&x,&y);

    for(i=x;i<=y;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}