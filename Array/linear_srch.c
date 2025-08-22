#include<stdio.h>
int main()
{
    int a[50],i,n,key;
    printf("Enter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     
    printf("Enter Element for search:");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            break ;
        }
    }
    if(i==n)
    printf("not find");
    else
    printf("Found");
    return 0;
   
}