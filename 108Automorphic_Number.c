//Check if a number Automorophic or not
#include<stdio.h>
int main()
{
    int n,sq,flag=0;
    printf("\n Enter a Number: ");
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        if(n%10==sq%10)
        {
            printf("\n Automorphic");
            flag++;
            break;
        }
        n=n/10;
        sq=sq/10;
    }
    if(flag==0)
    printf("\n Not Automorphic");
    return 0;   
}