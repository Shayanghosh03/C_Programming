//Without using any loop print 1 to 10
#include<stdio.h>
int main()
{
    int i=1;
    p:        /* Breakpoint*/
    if(i<=10)
    {
        printf("\n%d",i);
        i++;
        goto p;
    }
    return 0;
}