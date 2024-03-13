//Count total number of even digit in a number
#include<stdio.h>
int main()
{
    int r,n,count=0;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)
        {
            count++;
        }
        n=n/10;
    }
    printf("\n Total Even Digit=%d",count);
    return 0;
}