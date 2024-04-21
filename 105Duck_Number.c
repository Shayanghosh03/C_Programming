//Check a number the number is a Duck number or not.
#include<stdio.h>
int main()
{
    int n,r,fl=0;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    if(n==0)
    {
        printf("\n Not a Duck Number");
    }
    else
    {
        while(n!=0)
        {
            r=n%10;
            if(r==0)
            {
                printf("\n Duck Number");
                fl++;
                break;
            }
            n=n/10;
        }
        if(fl==0)
        {
            printf("\n Not a Duck Number");
        }
    }
    return 0;
}