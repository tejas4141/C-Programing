#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

if(a%5==0 || a%7==0)
printf("\n Number %d is Divisible is 5 and 7\n",a);
else
printf("\n number %d is Divisible  Not is 5 and 7 \n",a);
return 0;
}