//Check is a number is palindrome or not
#include<stdio.h>
int main()
{
    int n,r,b=0,temp;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        b=b*10+r;
        n=n/10;
    }
    if(b==temp)
    printf("\n Palindrome Number");
    else
    printf("\n Not a Palindrome Number");
    return 0;
}
