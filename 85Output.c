#include<stdio.h>
int main()
{
    int flag=1,i=1;
    if(!flag)
    printf("%d",++i);
    else
    printf("%d",--i);
    return 0;
}