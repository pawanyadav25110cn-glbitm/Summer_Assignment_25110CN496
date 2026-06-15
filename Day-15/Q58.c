#include <stdio.h>
int main() 
{
    int arr[100], n, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    temp = arr[0];

    for(int i = 0; i<n-1; i++)
    {
        arr[i] = arr[i + 1];
    }

    arr[n-1] = temp;

    printf("array after left rotation:\n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}