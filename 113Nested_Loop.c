//Enter a number and print the factorial each number up to that number.
#include<stdio.h>
int main()
{
    int i,j,f=1,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            f=f*j;
        }
        printf("\n Factorial=%d",f);
    }
    return 0;
}