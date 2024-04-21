#include<stdio.h>
void fun()
{
    static int i=5;
    printf("\n Hi %d",i++);
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}