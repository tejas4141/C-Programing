//17.	Write a program to accept quantity and rate for three items, compute the total sales amount,
//  Also compute and print the discount as follows:
//  (amount > – 20% discount, amount between to – 15% discount, amount between – to -- 8 % discount) 

#include<stdio.h>
int main()
{
    int rate1,rate2,rate3,q1,q2,q3,total_amt;
    int discount;
    

    printf("Enter Rate of 3 items:");
    scanf("%d%d%d",&rate1,&rate2,&rate3);

    printf("Enter Quntity of 3 items:");
    scanf("%d%d%d",&q1,&q2,&q3);

    total_amt=(rate1*q1)+(rate2*q2)+(rate3*q3);

    if(total_amt>400)
    discount=20;
    else if(total_amt>300 && total_amt<400)
    discount=15;
    else if(total_amt>200 && total_amt<300)
    discount=8;
    else
    discount=0;
   
    printf("Items               :%d\n",rate1,rate2,rate3);
    printf("Quntity             :%d\n",q1,q2,q3);
    printf("Total_sale_Amount   :%d\n",total_amt);
    printf("Discount is (%%)    :%d\n",discount);

    return 0;
     
}
 
