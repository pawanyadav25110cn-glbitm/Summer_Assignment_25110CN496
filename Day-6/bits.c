#include <stdio.h>
int main()
{
    int n, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        count += n % 2;
        n/=2;
    }
    printf("Number of sets bits = %d\n", count);

    return 0;
}