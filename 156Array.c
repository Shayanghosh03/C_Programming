//Binary search program
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
void b_search(int x[])
{
    int b=0,e=size-1,fl=0,key,mid;
    printf("\nEnter the value you want to search:\n");
    scanf("%d",&key);
    while(b<=e)
    {
        mid=(b+e)/2;
        if(x[mid]==key)
        {
            fl=1;
            break;
        }
        else if(key>=x[mid])
        {
            b=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    if(fl==0)
    printf("\nNo such value found");
    else
    printf("\n%d found at %d location",key,(mid+1));
}
int main()
{
    int a[size];
    printf("\nEnter array elements:\n");
    insert(a);
    printf("\nThe array elements are:\n");
    display(a);
    b_search(a);
    return 0;
}