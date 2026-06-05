#include <stdio.h>
int main()
{
    int n, i, j, LargestPrimeFactor = 0, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 2; i<=n; i++)
    {
        if(n % i == 0)
        {
            isPrime = 1;

            for(j = 2; j <= i/2; j++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime)
            {
                LargestPrimeFactor = i;
            }
        }
    }
    printf("Largest Prime factor = %d", LargestPrimeFactor);

    return 0;
}