#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int n, i, choice, id, found;

    printf("Enter Number Of Book: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Book %d\n", i+1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Name: ");
        scanf("%s", b[i].name);

        printf("Author Name: ");
        scanf("%s", b[i].author);

        printf("Quantity: ");
        scanf("%d", &b[i].quantity);
    }
    do 
    {
        printf("\n===== MINI LIBRARY SYSTEM =====\n");
        printf("1. Display All Books\n");
        printf("2. Search Book By ID\n");
        printf("3. Issue Book\n");
        printf("4. Exit\n");

        printf("Enter Your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
               printf("\n----- Book Details -----\n");
               for(i = 0; i<n; i++)
               {
                printf("\nBook Id: %d\n", b[i].id);
                printf("Book Name: %s\n", b[i].name);
                printf("Author: %s\n", b[i].author);
                printf("Quantity: %d\n", b[i].quantity);
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
                        printf("authr: %s\n", b[i].author);
                        printf("Quantity: %d\n", b[i].quantity);

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
                      printf("Enter Book ID to Issue: ");
                      scanf("%d", &id);
                      found =0;

                      for(i = 0; i<n; i++)
                      {
                        if(b[i].id == id)
                        {
                            found =1;

                            if(b[i].quantity>0)
                            {
                                b[i].quantity--;
                                printf("Book Issued Successfully!\n");
                            }
                            else
                            {
                                printf("Book Not Available!\n");
                            }
                            break;
                        }
                      }

                      if(found == 0)
                      {
                        printf("Book Not Found.\n");
                      }
                      break;

                      case 4:
                         printf("Exiting Program...\n");
                         break;

                         default:
                            printf("Invalid Choice!\n");
        }
    }while(choice != 4);

    return 0;
}