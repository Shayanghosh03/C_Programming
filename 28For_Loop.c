//Print the Sum of the first 10 natural numbers
#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=1;i<=10;i++)
    {
        s=s+i;
    }
    printf("\n Sum=%d",s);
    return 0;
}