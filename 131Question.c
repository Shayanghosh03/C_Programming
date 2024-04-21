//Find the factors of number including one but excluding that number it self
#include<stdio.h>
void fun(int x)
{
    int i;
    for(i=1;i<=x/2;i++)
    {
        if(x%i==0)
        printf("\n%d",i);
    }
}
int main()
{
    fun(16);
    return 0;
}