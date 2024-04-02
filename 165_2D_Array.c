#include<stdio.h>
void insert(int x[100][100],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
}
void display(int x[100][100],int m,int n)
{
    int i,j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<=n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int mat[100][100],m,n;
    l1:
    printf("\nEnter row numbwer:\n");
    scanf("%d",&m);
    if(m<1 || m>100)
    goto l1;
    l2:
    printf("\nEnter colume number:\n");
    scanf("%d",&n);
    if(n<1 || n>100)
    goto l2;
    printf("\nEnter the values:\n");
    insert(mat,m,n);
    printf("\nThe Matrix is \n");
    display(mat,m,n);
    return 0;
}