// 1 10 100 1000 . . . . . 
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%.0f\t",pow(10,i));
    }
    return 0;
}