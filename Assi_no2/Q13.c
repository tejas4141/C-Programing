//13.	Accept the time as hour, minute and seconds and check whether the time is valid.
//  (Hint:0<=hour<24, 0<=minute <60, 0<=second <60) (3 logics) 
 

#include<stdio.h>
int main()
{
    int hour,minute,second,time;
    printf("Enter hour:");
    scanf("%d",&hour);
    printf("Enter minute:");
    scanf("%d",&minute);
    printf("Enter a second:");
    scanf("%d",&second);


    if(hour>=0 && hour<24)
    {
         if(minute>=0 && minute<60){
            
        if(second>=0 && second<60)
        {
           printf("Time is valid \n");
        }else
        printf("second is invalid\n");
    }else
    printf("minutes are invalid\n");
}else
    printf("hours is invalid\n");

return 0;

}

