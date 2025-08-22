#include<stdio.h>
int main()
{
    int a[50],i,n,key,cnt=0;

    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter a element:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        cnt++;
    }
    if(cnt==0)
    printf("not found");
    else
    printf("Count is %d\n",cnt);

    return 0;
}