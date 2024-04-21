//Print the table of 5 upto 10 three times
#include<stdio.h>
int main()
{
    int i,j,s=1;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=10;j++)
        {
            s=5*j;
            printf("\ns=%d\t",s);
        }
    }
    return 0;
}