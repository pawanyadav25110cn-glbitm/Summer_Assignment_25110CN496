#include <stdio.h>
int main()
{
    int a[10][10], n;
    int i, j, sum = 0;

    printf("Enter oder of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix element:\n");
    for(i = 0; i<n; i++)
    {
        for(j = 0; j<n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i<n; i++)
    {
        sum += a[i][i];
    }
    printf("Sum of principal diagonal = %d", sum);

    return 0;
}