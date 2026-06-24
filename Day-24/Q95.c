#include <stdio.h>

int main()
{
    char str[100], longest[100];
    int i = 0, j = 0, maxlen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while(1)
    {
        if(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            len++;
        }
        else
        {
            if(len>maxlen)
            {
                maxlen = len;

                for(j = 0; j<len; j++)
                {
                    longest[j] = str[i-len+j];
                }
                longest[j] = '\0';
            }
            len = 0;
                if(str[i] == '\0' || str[i] == '\n')

                break;
            }
            i++;
        }
        printf("Longest word = %s\n", longest);
        printf("Length = %d", maxlen);

        return 0;
    }
    
