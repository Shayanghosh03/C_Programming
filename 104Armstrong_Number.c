#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,temp,count=0;
    float s=0;
    printf("\n Enter a number: ");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    n=temp;
    while(n!=0)
    {
        r=n%10;
        s=s+pow(r,count);
        n=n/10;
    }
    if(temp==s)
    printf("%d is a Armstrong number",temp);
     else
    printf("%d is not a Armstrong number",temp);
    return 0;
}