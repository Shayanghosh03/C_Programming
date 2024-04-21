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
        s=s*10+r;
        n=n/10;
    }
    if(temp==s)
    printf("\n %d is a Palindrome Number",temp);
    else
    printf("%d is not a Palindrome Number",temp);
}