#include<stdio.h>
int main()
{
    int i,n,s=0;
    for(i=1;i<=5;i++)
    {
        printf("\n Enter the Makrs: ");
        scanf("%d",&n);
        s=s+n;
    }
    printf("\n Avg=%f",s/5.0);
    return 0;
}