#include<stdio.h>
int main()
{
    int i,n,j,c=0;
    n=3;
    for(i=n/2;i<=n;i++)
    {
        for(j=1;j<=n/2;j++)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}