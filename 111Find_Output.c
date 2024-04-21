#include<stdio.h>
int main()
{
    int i=1,k=1;
    while(i<=k)
    {
        i++;
        k=k+i;
        printf("\n%d",k);
    }
    return 0;
}