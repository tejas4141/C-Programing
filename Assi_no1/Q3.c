#include<stdio.h>
int main(){
    float f,c,k;
    printf("Enter fahrenherit:");
    scanf("%f",&f);
    c=(5.0/9.0)*(f-32);
    k=c+273.15;
    printf("celsius:%.2f\n",c);
    printf("Kelvin:%.2f\n",k);
    return 0;
}