#include<stdio.h>
#include<math.h>
int main()
{
    int num,origininalNum,reminder,result=0,n=0;
    printf("Enter a number:");
    scanf("%d",&num);

    origininalNum=num;
    while(origininalNum !=0){
        origininalNum/=10;
        ++n;
    }
    origininalNum=num;

    while(origininalNum!=0){
        reminder=origininalNum%10;
        result +=pow(reminder,n);
        origininalNum/=10;
    }

    if(result==num)
    printf("%d is an Armstrong number.\n",num);
    else
    printf("%d is not an Armstrong number.\n",num);
    return 0;
}


