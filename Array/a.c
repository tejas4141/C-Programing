#include<stdio.h>
int main()
{
    int i,j,key,a[100],n;

    printf("Enter a n:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter a Key to delete:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
        for(j=i;j<n-1;j++)
        a[j]=a[j+1];
        n--;
        break;
        }
    }
     for (i=0;i<n;i++)
    printf("%d",a[i]);
return 0;
}