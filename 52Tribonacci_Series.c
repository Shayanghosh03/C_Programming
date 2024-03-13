//2 3 4 9 16 . . . . . . . n
#include<stdio.h>
int main()
{
    int n,a=2,b=3,c=4,d;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    printf("%d\t%d\t%d",a,b,c);
    while(d<n)
    {
        d=a+b+c;
        printf("\t%d",d);
        a=b;
        b=c;
        c=d;
    }
    return 0;
}