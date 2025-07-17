//11.	Write a program to compare two numbers? (==,>,<) 

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter 2 number:");
    scanf("%d%d",&num1,&num2);

    if(num1 ==num2)
    {
        printf("Both %d%d number are equal\n",num1,num2);
    }else if (num1 > num2)
    {
        printf("num1 %d are greater than %d num2\n",num1,num2);
    }else{
        printf("num2 %d less than %d num1\n",num1,num2);
    }
    return 0;
}