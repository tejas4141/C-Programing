#include<stdio.h>
int main()
{
    int x,y,a,b,dis;
    printf("Enter the X val:");
    scanf("%d",&x);
    printf("Enetr the Y val:");
    scanf("%d",&y);
    printf("Enter the A val:");
    scanf("%d",&a);
    printf("Enetr the B val:");
    scanf("%d",&b);

    dis=(x-y)+(a-b);
    

    printf("%d",dis);
}