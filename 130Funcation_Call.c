#include<stdio.h>
void fun(int x)
{
    static int i;
    printf("\n Hi %d",i++);
}
int main()
{
    fun(5);
    fun(5);
    return 0;
}