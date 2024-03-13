//s=2+4+6+....+n
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("\n Enter Your Range: ");
    scanf("%d",&n);
    for(i=2;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("\n %d",s);
    return 0;
}