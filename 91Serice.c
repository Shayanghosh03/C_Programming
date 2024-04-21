// 2 4 8 16 32 . . . . . . . n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%.0f\t",pow(2,i));
    }
    return 0;
}