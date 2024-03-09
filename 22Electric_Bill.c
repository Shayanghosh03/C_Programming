#include<stdio.h>
int main()
{
    int unit,bill;
    printf("\n Enter the unit: ");
    scanf("%d",&unit);
    if(unit<=100)
    bill=unit*1;
    else if(unit<=200)
    bill=100*1+(unit-100)*2;
    else if(unit<=300)
    bill=100*1+100*2+(unit-200)*3;
    else
    bill=100*1+100*2+100*3+(unit-300)*5;
    printf("\n Total Bill=%d",bill);
    return 0;
}