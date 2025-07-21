//16.	Write a program to accept marks for three subjects and find the total marks secured , average and also display the class obtained. 
// (Class I – above %, class II – % to %, pass class – % to % and fail otherwise) 

#include<stdio.h>
int main()
{
    int m1,m2,m3,total;
    char sub1[50],sub2[50],sub3[50],class[5];
    float avg;

    printf("Enter Three subject:");
    scanf("%s%s%s",&sub1,&sub2,&sub3);

    printf("Enter mark of subject:");
    scanf("%d%d%d",&m1,&m2,&m3);

    total=m1+m2+m3;
    avg=total/3;

    printf("Total marks     :%d\n",total);
    printf("Avg of Sub      :%.2f\n",avg);
    

    if(avg>80 && avg<100)
    printf("Student class is I \n");
    else if(avg>60 && avg<80)
    printf("Student class is II\n");
    else if(avg>35 && avg<60)
    printf("Student class is III/n");
    else
        printf(" Student is fail");

  

    return 0;
}