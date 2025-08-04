#include<stdio.h>
int main()
{
    int fact,n;
    printf("Enter a number:");
    scanf("%d",&n);

    fact=1;
    while(n>=2)
    {
        fact=fact*n;
        n--;
    }
    printf("The fact is:%d\n",fact);
    return 0;
}