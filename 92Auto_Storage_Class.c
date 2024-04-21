#include<stdio.h>
int main()
{
    auto int a=200;
    printf("\n%d",a);
    {
        int a=100;
        printf("\n%d",a);
    }
    return 0;
}