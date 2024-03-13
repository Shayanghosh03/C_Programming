//s=1+8+27+64+......+n
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,s=0;
    printf("\n Enter Your Range: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%0.0f+",pow(i,3)); // Pow function always returns float value output.
        s=s+pow(i,3);
    }
    printf("\n s=%d",s);
    return 0;

}