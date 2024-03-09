//Print the sum of all even numbers b/w 1 to 10
#include<stdio.h>
int main()
{
    int i,s=0;
    for(i=2;i<=10;i=i+2)
    {
        s=s+i;
    }
    printf("\nSum=%d",s);
    return 0;

}