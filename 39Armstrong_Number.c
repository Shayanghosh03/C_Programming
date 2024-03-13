#include<stdio.h>123
int main()
{
    int n,s=0,r,temp;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
    }
    if(temp==s)
    printf("\n This is a Aromstrong Number");
    else
    printf("\n This is not a Armstrong Number");
    return 0;
}