#include<stdio.h>
void main()
{
    int m,n,i,j;
    printf("Enter the no. of rows and columns :");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat2[m][n],mat3[m][n],trans[m][n];
    printf("Enter the first matrix : \n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&mat1[i][j]);
    printf("Enter the second matrix :\n");
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&mat2[i][j]);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    mat3[i][j]=mat1[i][j]+mat2[i][j];
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    trans[j][i]=mat3[i][j];

    printf("transpose is \n");
    for(i=0;i<n;i++)
    {    
    for(j=0;j<m;j++)
    {
    printf("%d ",trans[i][j]);
    }
    printf("\n");
    }
}