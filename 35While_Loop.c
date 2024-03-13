//Enter a Number and print total number of digits
#include<stdio.h>
int main()
{
    int n,count=0;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    printf("\n Total Digit=%d",count);
    return 0;
}