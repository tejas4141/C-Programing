//4.	Accept the cost price and selling price from the keyboard. Find out if the seller has made a profit or loss and display how much profit or loss has been made? 
#include<stdio.h>
int main(){
    int cp,sp,loss,profit;
    printf("Enter cost price:");
    scanf("%d",&cp);

    printf("Enter selling Price:");
    scanf("%d",&sp);

    profit=sp-cp;
    loss=cp-sp;
    
    if(sp>cp)
    printf("profit %d",profit);
    else
    printf("loss %d",loss);
    return 0;



}