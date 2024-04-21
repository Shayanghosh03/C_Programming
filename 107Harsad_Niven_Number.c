#include<stdio.h>
int main()
{
    int n,r,s=0,temp;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    if(temp%s==0)
    printf("\n Niven Number");
    else
    printf("\n Not a Niven Number");
    return 0;
}