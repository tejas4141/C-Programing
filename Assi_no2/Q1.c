#include<stdio.h>
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);

    if(a>=0)
        printf("Positive Number");
    else
       printf("negative number");
    return 0;
    }