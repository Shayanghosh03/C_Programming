//s=1+3+5+......+n
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
        s=s+i;
    }
    printf("\n %d",s);
    return 0;
}