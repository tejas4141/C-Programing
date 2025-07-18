#include<stdio.h>
int main()
{
    char ch;
    printf("Enter anything:");
    scanf("%c",&ch);

    if(ch>='A'&& ch<='Z')
    printf("capital Letter");
    else if(ch>='a' && ch<='z')
    printf("small letter");
    else if(ch>='0' && ch<='9')
    printf("Digit");
    else
    printf("special char");
    return 0;
}