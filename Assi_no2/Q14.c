//15.	Write a program, which accepts annual basic salary of an employee and calculates and displays the Income tax as per the following rules 
//1.	Basic: < 1,50,000 Tax = 0 1,50,000 to 3,00,000 Tax = 20% > 3,00,000 Tax = 30% 

#include<stdio.h>
int main()
{
    int bs,tax;

    printf("Enter a annual basic salary :");
    scanf("%d",&bs);

    if(bs<150000)
        tax=0;
    else if(bs>=150000 && bs <300000)
        tax=20;
    else
        tax=30;

    printf("Income Tax %d %%",tax);
    return 0;

}
