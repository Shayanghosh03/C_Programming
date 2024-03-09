//Write a Factorial Program of a user given number
#include<stdio.h>
int main()
{
    int i,f=1,n;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    printf("\n Factorial=%d",f);
    return 0;
}