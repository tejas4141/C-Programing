#include<stdio.h>
int main()
{
    int a[100],i,n, max=a[0];
    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n,i++)
    scanf("%d",&a[i]);

   
    for(i=1;i<n;i++)
    {
        if(max<a[i])
        max=a[i];
    }
    printf("Maximum num is %d\n",max);
    return 0;
}