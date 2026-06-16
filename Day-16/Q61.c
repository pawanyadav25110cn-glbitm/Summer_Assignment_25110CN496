#include <stdio.h>
int main()
{
    int arr[100], n, sum = 0, totalsum;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n - 1);
    for(int i=0; i<n-1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    totalsum = n * (n + 1) / 2;

    printf("Missing number = %d", totalsum - sum);

    return 0;
}