//12.	Write a program to find maximum of three numbers? (3-4 logics) and (with conditional operator)
// . Modify and find minimum of three numbers. 

#include<stdio.h>
int main()
{
    int num1,num2,num3,max,min;

    printf("Enter Three number:");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>=num2 && num1>num3)
    
        max=num1;
    else if (num2>=num1 && num2>num3)
    
        max=num2;
    else
    
        max=num3;
    

    printf("The max nuber is:%d\n",max);


     if(num1<=num2 && num1<num3)
    
        min=num1;
    else if (num2<=num1 && num2<num3)
    
        min=num2;
    else
    
        min=num3;

        printf("The min number:%d\n",min);

    return 0;
}
 
 
