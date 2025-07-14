#include<stdio.h>
int main(){
    float hr,da,tax;
    float bs ,home_salary;

    printf("Enter Basic salary:");
    scanf("%f",&bs);
    hr=0.10;
    da=0.30;
    tax=0.05;
    
    home_salary = bs * ( 1+ hr + da - tax);                                   
    printf("The Home sallry Taken by emp:%.2f\n",home_salary);
    return 0;

}