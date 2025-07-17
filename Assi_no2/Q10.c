//10.	Accept three sides of triangle as input, and print whether the triangle is valid or not. 
// (Hint: The triangle is valid if the sum of each of the two sides is greater than the third side). 
#include<stdio.h>
int main()
{
    int s1,s2,s3,sum;
    printf("print 3 sides of tringle :");
    scanf("%d%d%d",&s1,&s2,&s3);

    
    if(s1+s2>s3 && s1+s3>s2 && s2+s3>s1){
        printf("Tringle is valid");
    }else{
        printf("Tringle is invalid");
    }
    return 0;

}
 
