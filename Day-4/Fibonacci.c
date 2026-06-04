#include <stdio.h>
int main()
{
    int n, first = 0, Second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", first);
        next = first + Second;
        first = Second;
        Second = next;
    }
    return 0;
}