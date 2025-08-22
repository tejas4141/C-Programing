#include<stdio.h>
int main()
{
    int i,a[100],pos,data,n;

    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter a Position:");
    scanf("%d",&pos);

    if(pos<=0 || pos>n)
    {
        printf("Invalid Position");
        return 0;
    }
    printf("Enter a data:");
    scanf("%d",&data);

    for(i=n;i>=pos;i--)
    
        a[i]=a[i-1];
        a[pos-1]=data;
        n++;
    

    for(i=0;i<n;i++)
    printf(" %d",a[i]);

    return 0;
}