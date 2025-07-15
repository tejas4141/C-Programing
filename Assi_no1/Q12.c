#include<stdio.h>
int main(){
    char a;
    printf("Enter A char :");
    scanf("%c",&a);

    printf("\nPrevious character:%c",a-1);
    printf("\nAfter character:%c",a+1);
    return 0;
}