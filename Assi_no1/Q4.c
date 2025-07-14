#include<stdio.h>
int main(){
    float u,a,t,v,s;
    printf("Enter initial velocity:");
    scanf("%f",&u);
    printf("Enter acceleration:");
    scanf("%f",&a);
    printf("Enter time:");
    scanf("%f",&t);
   v = u + (a * t);             // Final velocity
    s = (u * t) + a*(t*t);
    printf("final velocity:%f \n",v);
    printf("The Distance:%f\n",s);
    return 0;

}