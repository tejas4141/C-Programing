#include<stdio.h>
 int main(){
    int a,b;
    printf("Enter two number:");
    scanf("%d%d",&a,&b);
    printf("Before swapping\nA=%d\nB=%d",a,b);
    //Using+and- operator
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping\nA=%d\nB=%d\n",a,b);

    printf("Before swapping\nA=%d\nB=%d",a,b);
    //using / and * operator
    a=a*b;
    b=a/b;
    a=a/b;
    printf("\nAfter swapping\nA=%d\nB=%d\n",a,b);
    return 0;
 }