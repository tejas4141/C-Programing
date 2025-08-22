#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\nAfter Sorting");
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);

    return 0;
}