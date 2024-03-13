//s=1+2^2+3^3+4^4+.....n^n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.0f+\t",pow(i,i));
    }
    return 0;
}