//5.	Write a program to check whether given number is divisible by 5 and 7? (with && operator and with nested if) 
#include<stdio.h>
int main(){
      int a;
      printf("Enter a number:");
      scanf("%d",&a);

      if(a%5==0 && a%7==0){
        printf("\nNumber %d is Divisible 5 And 7\n",a);
     }else{
        printf("\nNUmber %d is not Divisible by 5 and \n7",a);
     }
     return 0;
}