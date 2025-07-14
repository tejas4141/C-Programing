#include<stdio.h>
int main(){
    int amount;
    int tens,fives,once;
    printf("Enter amount:");
    scanf("%d",&amount);
    tens=amount/10;
    amount=amount % 10;
     
    fives=amount/5;
    amount=amount % 5;

    once=amount/1;
    amount=amount %1;

    printf("\namout to be given:\n");
    printf("\n10 currency  :%d\n",tens);
    printf("\n5 currency   :%d\n",fives);
    printf("\n1 currency  :%d\n",once);
    return 0;



}
