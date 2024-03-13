#include<stdio.h>
int main()
{
    int a=5,b=10,c=15,d;
    d=a>b?a>c?a:c:b>c?b:c;
    printf("\n Max=%d",d);
    return 0;
}