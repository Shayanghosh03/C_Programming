//Print the sum of all even and odd numbers b/w 1 to 10 seperately using one loop
#include<stdio.h>
int main()
{
    int i,s=0,k=0;
    for(i=1;i<=10;i++)
    {
        if(i%2==0)
        s=s+i;
        else
        k=k+i;
    }
    printf("\n Even Numbers Sum=%d \n Odd Numbers Sum=%d",s,k);
    return 0;
}