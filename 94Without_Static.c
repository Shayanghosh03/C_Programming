#include<stdio.h>
void fun()
{
    int a=1;
    printf("\n%d",++a);
}
int main()
{
    fun();
    fun();
    return 0;
}