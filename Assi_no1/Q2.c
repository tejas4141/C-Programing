#include<stdio.h>
int main(){
    float radius,height,surface_area,volume;
    float pi=3.14;
    printf("Enter Radius:");
    scanf("%f",&radius);
    printf("Enter height:");
    scanf("%f",&height);
    surface_area= 2 *pi*(radius*radius)+2*pi*radius*height;
    volume=pi*(radius*radius)*height;
    printf("surface area of cylinder:%f\n",surface_area);
    printf("volume of cylinder:%f\n",volume);
    return 0;
}