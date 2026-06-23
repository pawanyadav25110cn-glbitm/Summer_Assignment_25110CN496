#include <stdio.h>
int main()
{
    char str[100];
    int freq[256] = {0};
    int i, max = 0;
    char ch;

    printf("enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0' && str[i] != '\n'; i++)
    {
        freq[(int)str[i]]++;
    }
    for(i = 0; i<256; i++)
    {
        if(freq[i]>max)
        {
            max = freq[i];
            ch = i;
        }
    }
    printf("Maximum occuring character = %c\n", ch);
    printf("Frequency = %d", max);

    return 0;
}