#include <stdio.h>
int main()
{
    int arr[100], n, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            arr[count] = arr[i];
            count++;
        }
    }
    while(count<n)
    {
        arr[count] = 0;
        count++;
    }
    printf("Array after moving zeroes to end:\n");
    for(int i = 0; i<n; i++)
    {
     printf("%d ", arr[i]);
    }
    return 0;
}