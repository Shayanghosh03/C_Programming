//Enter the value of n and print the squar of all number between 1 to n.
#include<stdio.h>
int main()
{
    int i,n,j,s;
    printf("\n Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s=i*i;
        }
        printf("\n S=%d",s);
    }
    return 0;
}