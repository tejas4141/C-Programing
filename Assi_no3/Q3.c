#include<stdio.h>
int main()
{
    int x,y,choose,num;
    
    
    printf("Enter two num :");
    scanf("%d%d",&x,&y);

    //printf("choose an operator:");
    printf("1: Equality\n");
    printf("2: Less than\n");
    printf("3: Quotient and Reminder\n");
    printf("4: range\n");
    printf("5: swap\n");
    printf("choose an operator:");
    scanf("%d",&choose);

    switch(choose)
    {
        case 1:
                if(x==y){
                    printf("x and y are equal\n");
                }else{
                    printf("x and y are not equal\n");
                }
                break;
        case 2: 
                if(x<y){
                    printf("x is less than y\n");
                }else{
                    printf("x is not less than y\n");
                }
                break;
        case 3:
                if(y!=0){
                    printf("Quotient is %d\n",x/y);
                    printf("Reminder is %d\n",x/y);
                }else{
                    printf("not division by zero\n");
                }
                break;
        case 4:
        printf("Enter a number:");
        scanf("%d",&num);
            if((num>=x && num<=y)||(num>=y && num<=x)){
                 printf("%d  are betwwen %d and %d \n",num,x,y);
            }else{
                 printf("%d are not between %d and %d \n",num,x,y);
            }
            break;
        case 5:
                printf("Before swapping %d %d\n",x,y);

                x=x+y;
                y=x-y;
                x=x-y;
                printf("After swapping %d %d \n",x,y);
            break;
        default:printf("Invalid..");
    }
    return 0;



  
}