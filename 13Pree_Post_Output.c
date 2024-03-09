#include<stdio.h>
int main()
{
    int a=-2,b;
    b= ++a + a++;
    printf("\n a=%d and b=%d",a,b);
    return 0;
}