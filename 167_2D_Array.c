#include<stdio.h>
void insert(int x[100][100],int m,int n)
{
    printf("\nEnter Values for the Matrix:\n");
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
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n\n");
    }
}
void sum(int x[100][100],int m,int n)
{
    int i,j,s=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==0 || i==m-1 || j==0 || j==n-1)
            s=s+x[i][j];
        }
    }
     printf("\nUnsorted Boundary Sum %d",s);
}
int main()
{
    int mat[100][100],m,n;
    l1:
    printf("\nEnter row number:\n");
    scanf("%d",&m);
    if(m<1 || m>100)
    goto l1;
    l2:
    printf("\nEnter column number:\n");
    scanf("%d",&n);
    if(n<1 || n>100)
    goto l2;
    insert(mat,m,n);
    printf("\nThe matrix is:\n");
    display(mat,m,n);
    sum(mat,m,n);
    return 0;
}