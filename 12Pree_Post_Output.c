#include<stdio.h>
int main()
{
    int a=-3,b;
    b= a++ + a++;
    printf("\nb=%d and a=%d",b,a);
    return 0;
}