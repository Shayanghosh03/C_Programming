//9 99 999 9999 99999 . . . . . . .
#include<stdio.h>
int main()
{
    int i,s=0,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=(s*10)+9;
        printf("%d\t",s);
    }
    return 0;
}