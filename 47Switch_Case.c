#include<stdio.h>
int main()
{
    int ch,i=1;
    p:
    printf("\n Enter your choice: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        i++;
        printf("\n%d",i);
        break;
        case 2:
        i--;
        printf("%d",++i);
        break;
        case 3:
        printf("%d",i++);
        break;
        default:
        printf("\n Invalid Input");
        break;
    }
    goto p;
    return 0;
}