#include <stdio.h>
int main()
{
    int n;
    long long factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        factorial = factorial*i;
    }
    printf("factorial of %d = %lld", n, factorial);
    return 0;

}