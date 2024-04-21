/*Enter a two digit no and display its first digit, display its last digit
and reverse the number*/
#include<stdio.h>
int main()
{
    int n,f,l,r;
    printf("\n Enter the number: ");
    scanf("%d",&n);
    f=n/10;  //First digit number
    l=n%10;  //Last digit number
    r=l*10+f; //Reverse number
    printf("\nFirst digit number %d",f);
    printf("\nLast digit number %d",l);
    printf("\nReverse number %d",r);
    return 0;
}