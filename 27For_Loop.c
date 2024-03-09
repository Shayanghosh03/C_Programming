//Print the square of all even numbers b/w 1 to 20 in reverse order
#include<stdio.h>
int main()
{
    int i;
    for(i=20;i>=2;i=i-2)
    {
        printf("\n%d",i*i);
    }
    return 0;
}