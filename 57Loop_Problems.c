//s=1+(1*2)+(1*2*3)+....+n
//s=1+2!+3!+4!+.......+n!
#include<stdio.h>
int main()
{
    int n,s1=1,s2=0,j,i;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            s1=s1*j;
        }
        s2=s2+s1;
    }
    printf("\n %d",s2);
    return 0;
}