//Linear search program
#include<stdio.h>
#define size 5
void insert(int x[])
{
    int i;
    for(i=0;i<size;i++)
    {
        scanf("%d",&x[i]);
    }
}
void display(int x[])
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\t",x[i]);
    }
}
void l_search(int x[])
{
    int i,fl=0,key;
    printf("\nEnter the value you want search:\n");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(x[i]==key)
        {
            fl=1;
            break;
        }
    }
    if(fl==0)
    printf("\nNo such value found");
    else
    printf("\n%d found at %d location",key,i+1);
}
int main()
{
    int a[size];
    printf("\nEnter the array elements:\n");
    insert(a);
    printf("\nThe array elements are:\n");
    display(a);
    l_search(a);
    return 0;
}