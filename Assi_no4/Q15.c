//15.	Write a program to find sum of even numbers from 1 to 10 (or odd numbers) 
    #include<stdio.h>
    int main()
    {
        int i,sum=0,n;
        printf("Enter a number:");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            if(i%2==0){
            sum+=i;}
        }
        printf("%d\n",sum);

        return 0;
    }