#include<stdio.h>
int main()
{
    float a=10.23; //Compiler consider this double
    if(a==10.23)
    printf("\n Hi");
    else
    printf("\n Bye"); //Output=Bye
    return 0;
}