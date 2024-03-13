//Write a Program to reverse a number
#include<stdio.h>
int main()
{
    int n,r,b=0;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    printf("\n Reverse Number %d",b);
    return 0;
}