#include<stdio.h>
int main()
{
    int r,v,choose;
    
    float  pi,Area,circumfernce,volume;
    pi=3.14;

    printf("Radius of circle:");
    scanf("%d",&r);

    
   
    printf("1: Area of circle\n");
    printf("2: circumfernce of circle\n");
    printf("3: volume of sphere\n");
    printf("choose option:");
    scanf("%d",&choose);

    switch(choose)
    {
        case 1:
                Area=pi*(r*r);
                printf("Area of circle: %.2f\n",Area);
        break;
        case 2:
                circumfernce=2*pi*r;
                printf("Circumfernce of circle: %.2f\n",circumfernce);
        break;
        case 3:
                volume=(4.0/3.0)*pi*(r*r*r);
                printf("volume of sphere :%.2f\n",volume);
        break;
        default:printf("Invalid...");       
    }
    return 0;
}