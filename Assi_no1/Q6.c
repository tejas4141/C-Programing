#include<stdio.h>
int main()
{
    float l,b,h,surface_area,volume;
    printf("Enter a length:");
    scanf("%f",&l);

    printf("Enter a breath:");
    scanf("%f",&b);

    printf("Enter a height:");
    scanf("%f",&h);

    surface_area= 2*((l*b)+(l*h)+(b*h));
    volume=(l*b*h);
        printf("Surface area of cuboid:%.2f\n",surface_area);
    printf("volume of cuboid:%.2f\n",volume);
    
    return 0;
 }