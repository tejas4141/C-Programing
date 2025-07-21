//18.	A library charges a fine for every book returned late.
//  Accept the number of days the member is late, compute and print the fine as follows
// :(less than five days Rs fine, for 6 to 10 days Rs. Fine and above 10 days Rs. fine ) 
 
#include<stdio.h>
int main()
{
    int late,fine;
    printf("Enter a dayas Member late:");
    scanf("%d",&late);

    if(late>10)
    fine=200;
    else if(late>6 && late<10)
    fine=100;
    else
    fine=50;

    printf("Member late day:%d\n",late);
    printf("The fine member charged to library:%d Rupees\n",fine);

    return 0;

}
