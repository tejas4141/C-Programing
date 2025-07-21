//19.	Write a Program to convert lowercase letter into uppercase letter and vice versa. 

#include<stdio.h>
int main()
{
    char ch;

    printf("Enter character:");
    scanf("%c",&ch);

    if(ch>='a' && ch<='z'){
    ch=ch-32;
    printf("Uppercase:%c\n",ch);
     
    }else if(ch>='A' && ch<='Z'){
    ch=ch+32;
    printf("Lowercase:%c\n",ch);
     
    }else{
    printf("Not a alphabetical letter\n");
    }  
    return 0;
}