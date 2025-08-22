// Wap accept array and print sum?

#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum=sum+a[i];

    printf("\n sum is %d\n",sum);
    return 0;
}