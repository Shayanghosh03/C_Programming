//s=2+5+10+17+.......+n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+(pow(i,2)+1);
    }
    printf("\n %d",s);
    return 0;
}