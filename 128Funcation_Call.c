#include<stdio.h>
void fun(int x)
{
    
    printf("\n Ho %d",x++);
}
int main()
{
    fun(5);
    fun(5);
    return 0;
}