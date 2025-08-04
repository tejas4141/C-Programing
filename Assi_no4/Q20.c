#include<stdio.h>
int main()
{
    int x,n,i,result=1;
    printf("Enter x and n :");
    scanf("%d%d",&x,&n);

    for(i=1;i<=n;i++)
    {
        result=result*x;
    }

    printf("%d raised to the power %d is :%d",x,n,result);
    return 0;
}