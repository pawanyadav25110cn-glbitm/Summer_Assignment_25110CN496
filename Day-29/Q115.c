#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int choice, i, len;

    do 
    {
        printf("\n===== STRING OPERATION SYSTEM =====\n");
        printf("1. Input String\n");
        printf("2. Display String\n");
        printf("3. Find String Length\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter String: ");
                scanf("%s", str);
                printf("String Stored Succesfully!\n");
                break;

                case 2:
                    printf("String: %s\n", str);
                    break;

                    case 3:
                    len = strlen(str);
                    printf("Length Of String = %d\n", len);
                    break;

                    case 4:
                       len = strlen(str);
                       for(i = 0; i<len; i++)
                       {
                        rev[i] = str[len - i - 1];
                       }
                       rev[len] = '\0';
                       printf("Reversed String: %s\n", rev);
                       break;

                       case 5:
                       printf("Exiting Program...\n");
                       break;

                       default:
                           printf("Invalid Choice!\n");
        }
    }while(choice != 5);
    return 0;
}