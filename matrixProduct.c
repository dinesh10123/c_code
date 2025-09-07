#include<stdio.h>
int main(){
    int m1,n1,m2,n2;
    printf("Enter Row and column of first matrix : ");
    scanf("%d %d",&m1,&n1);
    printf("Enter Row and column of second matrix : ");
    scanf("%d %d",&m2,&n2);

    if(n1 != m2){
        printf("Matrix multiplication is not possible : ");
        return 0;
    }

    int a[m1][n1], b[m2][n2], product[m1][n2];

    printf("Enter Element of first matrix : ");
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter Element of Second matrix : ");
    for (int i = 0; i <m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i <m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            product[i][j]=0;
        }
    }

    for (int i = 0; i <m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            for(int k=0; k<n1; k++)
            {
                product[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }

    printf("Product of two matrix is : \n");
    for (int i = 0; i <m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("%d ",product[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}