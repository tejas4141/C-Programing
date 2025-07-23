//Write a program to accept the week day as number from user and display Monday to Sunday

#include<stdio.h>
int main()
{
    int num;
    printf("Enter week day:");
    scanf("%d",&num);

    switch(num)
    {
        case 1:printf("Monday");
        break;
        case 2:printf("Thuesday");
        break;
        case 3:printf("Wednesday");
        break;
        case 4:printf("Thruesday");
        break;
        case 5:printf("Friday");
        break;
        case 6:printf("Saturday");
        break;
        case 7:printf("Sunday");
        break;
        default:printf("Invalid Day...");

    }
    return 0;
}