//Enter a three digit numbers then print the sum of first and last digit
#include<stdio.h>
int main()
{
    int i,j,k,s=0;
    printf("\n Enter a three digit number: ");
    scanf("%d",&i);
    j=i%10;
    k=i/100;
    s=j+k;
    printf("\n The sum of frist and last digit = %d",s);
    return 0;
}