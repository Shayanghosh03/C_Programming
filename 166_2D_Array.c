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
        for(j=0;j<n;j++)
        {
            printf("%d\t",x[i][j]);
        }
        printf("\n\n");
    }
}
void sum(int x[100][100],int y[100][100],int m,int n)
{
    int i,j,mat3[m][n];
    printf("\nSum of two matrixs are:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            mat3[i][j]=x[i][j]+y[i][j];
            printf("%d\t",mat3[i][j]);
        }
        printf("\n\n");
    }
}
int main()
{
    int mat[100][100],mat1[100][100],m,n;
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
    printf("\nEnter 1st matrix elements:\n");
    insert(mat,m,n);
    printf("\nEnter 2nd matrix elements:\n");
    insert(mat1,m,n);
    printf("\nThe 1st matrix is:\n");
    display(mat,m,n);
    printf("\nThe 2nd matrix is:\n");
    display(mat1,m,n);
    sum(mat,mat1,m,n);
    return 0;
}

