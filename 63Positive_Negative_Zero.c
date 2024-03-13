#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    if(n>0)
    printf("\n Posative");
    else if(n<0)
    printf("\n Negative");
    else
    printf("\n Zero");
    return 0;
}