//1 11 111 1111 11111 . . . . . . 
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=(s*10)+1;
        printf("%d\t",s);
    }
    return 0;
}