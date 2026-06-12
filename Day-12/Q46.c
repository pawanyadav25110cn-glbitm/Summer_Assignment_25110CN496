#include <stdio.h>
int armstrong(int n)
{
    int sum = 0, temp = n, rem;

    while(temp != 0)
    {
        rem = temp % 10;
        sum = sum + (rem * rem * rem);
        temp = temp / 10;
    }
    if (sum == n)
    return 1;
    else
    return 0;
}
int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num))
    printf("%d is armstrong number", num);
    else
    printf("%d is not an armstrong number", num);

    return 0;
}