#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int i, flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    for(i = 0; str1[i] != '\0' && str1[i] != '\n'; i++)
    {
        freq1[(int)str1[i]]++;
    }
    for(i = 0; str2[i] != '\0' && str2[i] != '\n'; i++)
    {
        freq2[(int)str2[i]]++;
    }
    for(i = 0; i<256; i++)
    {
        if(freq1[i] != freq2[i])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    printf("strings are anagrams");
    else
    printf("strings are not anagrams");

    return 0;
}