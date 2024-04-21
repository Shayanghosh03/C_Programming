#include<stdio.h>
int main()
{
    static int a=100;
    {
        static int a=200;
        printf("%d\n",a);
    }
    printf("%d\n",a);
    return 0;
}