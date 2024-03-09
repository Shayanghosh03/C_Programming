#include<stdio.h>
int main()
{
    int amt,tw,fi,t,h;
    printf("\n Enter the amount: ");
    scanf("%d",&amt);
    if(amt%100==0)
    {
        tw=amt/2000;
        amt=amt%2000;
        fi=amt/500;
        amt=amt%500;
        t=amt/200;
        amt=amt%200;
        h=amt/100;
        printf("\n 2000=%d",tw);
        printf("\n 500=%d",fi);
        printf("\n 200=%d",t);
        printf("\n 100=%d",h);
        return 0;
    }
}