#include<stdio.h>
int main()
{
    int n;
    printf("\n Enter the age: ");
    scanf("%d",&n);
    if(n>=18)
    printf("\n This Person is eligible to vote");
    else
    printf("\n This Person is not eligible to vote");
    return 0;

}