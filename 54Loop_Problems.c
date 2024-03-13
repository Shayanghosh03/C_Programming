//s=1+(1+2)+(1+2+3)+.....n
#include<stdio.h>
int main()
{
    int i,n,s1=0,s2=0,j;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s1=s1+j;
        }
        s2=s2+s1;
    }
    printf("\n s=%d",s2);
    return 0;
}