#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0,max,min;
    int choose;

while(1){
   
    printf("\n1: Display :");
    printf("\n2: Sum is");
    printf("\n3: max Num is:");
    printf("\n4: min num is:");
    printf("\n5: avg  :");
    printf("\n6: sort :");
    printf("\n7: search  ");
    printf("\n8: insert ");
    printf("\n9: delete");
    printf("\n10: Exit\n");
    printf("\nEnter a choose:\n");
    scanf("%d",&choose);

    printf("\nEnter a n:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    if(choose>=10)
    {
        printf("Invalid choose");
    }
    

    switch(choose){
        case 1:
                for(i=0;i<n;i++)
                printf("%d",a[i]);
                break ;
        case 2:
                for(i=0;i<n;i++)
                sum=sum+a[i];
                 printf("\n sum is %d\n",sum);
                break ;
        case 3:
                max=a[0];
                 for(i=1;i<n;i++)
                  {
                    if(max<a[i])
                    max=a[i];
                 }
                printf("Maximum num is %d\n",max);
                break;
        case 4:
                min=a[0];
                 for(i=1;i<n;i++)
                  {
                    if(min>a[i])
                    min=a[i];
                 }
                printf("Mininum is %d\n",min);
                break;
                
    }


    
}
} 


   