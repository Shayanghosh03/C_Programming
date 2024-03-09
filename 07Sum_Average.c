#include<stdio.h>
int main()
{
    int m1,m2,sum;
    float avg;
    printf("\n Enter 1st Number: ");
    scanf("%d",&m1);
    printf("\n Enter 2nd Number: ");
    scanf("%d",&m2);
    sum=m1+m2;
    avg=sum/2.0;
    printf("\n Sum=%d",sum);
    printf("\n Average=%0.2f",avg);
    return 0;
}