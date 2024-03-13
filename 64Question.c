/* Enter cost price and sell price of product now calculate the 
amount of profit or loss or no profit no loss condition */
#include<stdio.h>
int main()
{
    int a,b,profit;
    printf("\n Enter cost price: ");
    scanf("%d",&a);
    printf("\n Enter sale price: ");
    scanf("%d",&b);
    profit=b-a;
    if(a>b)
    printf("\n Loss=%d",abs(profit));
    else if(a<b)
    printf("\n Profit=%d",profit);
    else
    printf("\n No profit no loss");
    return 0;
}
