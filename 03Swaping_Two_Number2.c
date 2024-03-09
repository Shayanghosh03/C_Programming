#include<stdio.h>
int main()
{
    int a=5,b=6;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n a=%d and b=%d",a,b);
    return 0;
}