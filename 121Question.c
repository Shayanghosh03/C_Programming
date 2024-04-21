#include<stdio.h>
int main()
{
    int a,b,i,temp,s,r;
    printf("\n Enter the staring range");
    scanf("%d",&a);
    printf("\n Enter the ending range");
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        temp=i;
        s=0;
        while(temp!=0)
        {
            r=temp%10;
            s=s+(r*r*r);
            temp=temp/10;
        }
        if(i==s)
        printf("%d",i);
    }
    return 0;
}