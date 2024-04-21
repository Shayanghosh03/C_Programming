/*Enter a value of n and print the squar of all 
odd numbers from 1 to n in reverse order*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("\n Enter the range: ");
    scanf("%d",&n);
    if(n%2==0)
    n=n-1;
    for(i=n;i>=1;i=i-2)
    {
        printf("\n%d",i*i);
    }
    return 0;
}