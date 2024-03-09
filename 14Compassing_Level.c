#include<stdio.h>
int main()
{
    int a=5,b=6;
    b= ++a + --a + a++;
    printf("a=%d and b=%d",a,b);
    return 0;
}