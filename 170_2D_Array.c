#include<stdio.h>

void insert(int x[100][100],int m,int n)
{
    printf("\n Enter Values for the Matrix \n");
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
    int i,j,s=0,b[m*n],k=0,temp;

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            b[k++]=x[i][j];
            if(i==0 || i==m-1 || j==0 || j==n-1)
                s=s+x[i][j];
        }

    }
    printf("\n Unsorted Boundary Sum %d\n",s);


    for(i=0;i<k-1;i++)
    {
        for(j=0;j<k-1-i;j++)
        {
            if(b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }

    k=0;
    s=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        x[i][j]=b[k++];

            if(i==0 || i==m-1 || j==0 || j==n-1)
                s=s+x[i][j];
         printf("%d\t",x[i][j]);
        }
        printf("\n\n");

    }
    printf("\n sorted Boundary Sum %d",s);

}


int main()
{
    int mat[100][100],m,n;
    L1:
    printf("\nEnter row Number ");
    scanf("%d",&m);
    if(m<1 || m>100)
        goto L1;
    L2:
    printf("\nEnter col Number ");
    scanf("%d",&n);
    if(n<1 || n>100)
        goto L2;

    insert(mat,m,n);

    printf("\n The 1st  Matrix Is \n");
    display(mat,m,n);

    sum(mat,m,n);

    return 0;

}