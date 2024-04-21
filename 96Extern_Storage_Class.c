#include<stdio.h>
int main()
{
    extern int ok;
    printf("value of ok=%d",ok);
    return 0;
}
extern int ok=1000;