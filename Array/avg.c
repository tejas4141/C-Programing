#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,avg;

    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    sum=sum+a[i];
    avg=sum/n;

    printf("avg is %d\n",avg);
    return 0;
}