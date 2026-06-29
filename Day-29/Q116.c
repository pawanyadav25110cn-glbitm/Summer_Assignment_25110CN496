#include <stdio.h>

struct Item
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Item item[100];
    int n, i, choice, id, found;

    printf("Enter Number Of Items: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Item %d\n", i + 1);

        printf("Item ID: ");
        scanf("%d", &item[i].id);

        printf("Item Name: ");
        scanf("%s", item[i].name);

        printf("Quantity: ");
        scanf("%d", &item[i].quantity);

        printf("Price: ");
        scanf("%f", &item[i].price);
    }
    do 
    {
        printf("\n===== INVENTORY MANAGEMENT SYSTEM =====\n");
        printf("1. Display All Item\n");
        printf("2. Search Item By ID\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Item Details -----\n");
                for(i = 0; i<n; i++)
                {
                    printf("\nItem Id: %d\n", item[i].id);
                    printf("Item Name: %s\n", item[i].name);
                    printf("Quantity: %d\n", item[i].quantity);
                    printf("Price: %.2f\n", item[i].price);
                }
                break;

                case 2:
                    found = 0;

                    printf("Enter Item ID: ");
                    scanf("%d", &id);

                    for(i = 0; i<n; i++)
                    {
                        if(item[i].id == id)
                        {
                            printf("\nItem Found\n");
                            printf("Item ID: %d\n", item[i].id);
                            printf("Item Name: %s\n", item[i].name);
                            printf("Quantity: %d\n", item[i].quantity);
                            printf("Price: %.2f\n", item[i].price);

                            found = 1;
                            break;
                        }
                    }
                    if(found == 0)
                    {
                        printf("Item Not Found.\n");
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