//s=1+2^3+3^4+4^5+......
#include<stdio.h>
#include<math.h>
int main()
{
    int i,s=0,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(pow(i,(i+1)));
    }
    printf("\n%d",s);
    return 0;
}