#include<stdio.h>
void main()
{
    int a[100],n,i,j;
    int flag=1;
    printf("Ente arry size");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    i=0;
    while(flag)
    {     
      flag=0;
      for(j=0;j<n-i-1;j++)
      {
        if(a[j]>a[j+1])
        {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
        flag=1;
        }
      }
      for(j=0;j<n;j++)
      printf("%d",a[j]);
    printf("\n");
    i++;
    }
    printf("after sorting");
    for(i=0;i<n;i++)
    printf("\n %d",a[i]);
}