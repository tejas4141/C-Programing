#include<stdio.h>
#include<ctype.h>

int main()
{
    char ch ;
    printf("Enter a anything:");
    scanf("%c",&ch);

    if(isupper(ch))
    printf("capital letter");
    else if(islower(ch))
    printf("small letter");
    else if(isdigit(ch))
    printf("Digit");
    else
    printf("Special char");

    return 0;
}