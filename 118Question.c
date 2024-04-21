//Press a key and display if it is capital latter, small letter number or specialchar
#include<stdio.h>
int main()
{
    int ch;
    printf("\n Press any key: ");
    ch=getche();
    if((int)ch>=65 && (int)ch<=90)
    printf("\n Capital Letter");
    else if((int)ch>=97 && (int)ch<=122)
    printf("\n Small Letter");
    else if((int)ch>=48 && (int)ch<=57)
    printf("\n It's a digit");
    else
    printf("\n Special Char");
    return 0;
}