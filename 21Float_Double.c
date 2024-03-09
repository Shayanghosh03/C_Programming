#include<stdio.h>
int main()
{
    float a=10.23;
    if(a==10.23f) // a==10.23f Compiler consider this float type number
    printf("\n Hi");
    else
    printf("\n Bye"); //Output=Hi
    return 0;
}