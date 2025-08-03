//5.	Write a program to print 1 to N 
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
    return 0;
}