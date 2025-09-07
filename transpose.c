#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter Row and column of matrix : ");
    scanf("%d%d", &m, &n);

    int a[m][n], transpose[n][m];

    printf("Enter Elements in matrix : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    printf("Transpose of matrix is : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}