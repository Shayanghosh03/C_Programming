#include<stdio.h>
void fun(int x)
{
    int i,fl=0;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        {
            fl=prime(i);
            if(fl==1)
            printf("\n%d",i);
        }
    }
}
int prime(int i)
{
    int j;
    for(j=2;j<=i/2;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
int main()
{
    fun(16);
    return 0;
}