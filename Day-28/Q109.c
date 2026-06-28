#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
};

int main()
{
    struct Book b[100];
    int n, i, choice, id, found;

    printf("Enter Number Of Books: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author Name: ");
        scanf("%s", b[i].author );
    }
    do 
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book By ID\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Book Details -----\n");
                for(i = 0; i<n; i++)
                {
                    printf("\nBook ID: %d\n", b[i].id);
                    printf("Book Name: %s\n", b[i].name);
                    printf("Author: %s\n", b[i].author);
                }
                break;

                case 2:
                    found = 0;

                    printf("Enter Book ID: ");
                    scanf("%d", &id);
                    

                    for(i = 0; i<n; i++)
                    {
                        if(b[i].id == id)
                        {
                            printf("\nBook Found\n");
                            printf("Book ID: %d\n", b[i].id);
                            printf("Book Name: %s\n", b[i].name);
                            printf("Author: %s\n", b[i].author);

                            found = 1;
                            break;
                        }
                    }
                    if(found == 0)
                    {
                        printf("Book Not Found.\n");
                    }
                    break;

                    case 3:
                       printf("Exiting Program...\n");

                       break;

                       default:
                          printf("Invalid Choice!\n");
         }
    }while(choice != 3);

    return 0;
}