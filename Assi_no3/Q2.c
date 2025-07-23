//2.	Write a program, which accepts two integers and an operator as a character (+ - * /), 
//  the corresponding operation and displays the result. 
#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter two num:");
    scanf("%d%c%d",&a,&op,&b);

    switch(op)
    {
        case '+':printf("Addition of %d %c %d is %d\n",a,op,b,(a+b));
        break;
        case '-':printf("Subtraction  of %d %c %d is %d\n",a,op,b,(a-b));
        break;
        case '*':printf("Multiplication of %d %c %d is %d\n",a,op,b,(a*b));
        break;
        case '/':printf("Division of %d %c %d is %d\n",a,op,b,(a/b));
        break;
        default:printf("The number with operation are Inavalid...");
    }
    return 0;
}