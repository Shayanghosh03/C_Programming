//s=1+4+9+16+.....+n
#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("\n Enter your range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(i*i);
    }
    printf("\n%d",s);
    return 0;
}