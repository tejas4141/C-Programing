#include<stdio.h>
int main(){
    float radius,area,circumference;
    float pi= 3.14;

    printf("Enter a radius:");

    scanf("%f",&radius);

    area= pi*radius * radius;
    
    circumference= 2 * pi *radius;

    printf("Area of circle:%.2f\n",area);
    printf("circuference of circle:%.2f\n",circumference);
    return 0;
}