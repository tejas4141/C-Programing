#include<stdio.h>
int main()
{
    int id1,id2,id3,q1,q2,q3,p1,p2,p3;
    float total,disper,payamt,disamt;
    char name1[30],name2[30],name3[30];
    FILE*fp;
    fp=fopen("product.txt","w");
  
    printf("Enter  product id:");
    scanf("%d%d%d",&id1,&id2,&id3);
    
    printf("Enter product name:");
    scanf("%s%s%s",&name1,&name2,&name3);

    printf("Enter product price:");
    scanf("%d%d%d",&p1,&p2,&p3);

    printf("Entr quntity:");
    scanf("%d%d%d",&q1,&q2,&q3);

    total=(p1*q1)+(p2*q2)+(p3*q3);
    if(total>=100000)
    {
            disper=10;
    }
    else if(total>=80000)
    {
        disper=8;
    }
     else if(total>=50000)
    {
        disper=5;
    }
     else if(total>=30000)
    {
        disper=3;
    }
    else{
        disper=0;
    }
    disamt=(total*disper)/100;
    payamt = total-disamt;
    
    fprintf(fp,"\n------------------------------------------------------------------------------");
    fprintf(fp,"\n|  ID  |         Name        |    Price     |      Qty     |       Total     |");
    fprintf(fp,"\n------------------------------------------------------------------------------");
    fprintf(fp,"\n|%6d|%21s|%14d|%14d|%17d|",id1,name1,p1,q1,(p1*q1));
    fprintf(fp,"\n------------------------------------------------------------------------------");
    fprintf(fp,"\n|%6d|%21s|%14d|%14d|%17d|",id2,name2,p2,q2,(p2*q2));
    fprintf(fp,"\n------------------------------------------------------------------------------");
    fprintf(fp,"\n|%6d|%21s|%14d|%14d|%17d|",id3,name3,p3,q3,(p3*q3));
    fprintf(fp,"\n------------------------------------------------------------------------------");
    fprintf(fp,"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tTotal        :%.2f",total);
    fprintf(fp,"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tDisper(%%)    :%.2f",disper);
    fprintf(fp,"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tDis_amt      :%.2f",disamt);
    fprintf(fp,"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tPay_amt      :%.2f",payamt);


    return 0;
}