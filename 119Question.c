/*Enter a four digit number without using loop
find the product second and third digit*/
#include<stdio.h>
int main()
{
    int r,n,p;
    printf("\n Enter a four digit number: ");
    scanf("%d",&n);
    n=n/10;
    r=n%10;
    n=n/10;
    p=n%10;
    printf("\n Product=%d",r*p);
    return 0;
}