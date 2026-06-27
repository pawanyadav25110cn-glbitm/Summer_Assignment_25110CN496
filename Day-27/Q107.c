#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};
int main()
{
    struct Employee e[100];
    int n, i, choice, id, found;

    printf("Enter Number of Employees: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter details of Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Basic Salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = 0.20 * e[i].basic;
        e[i].da = 0.10 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }
    do 
    {
        printf("\n===== Salary Management System =====\n");

        printf("1. Display All Employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
               printf("\nEmoloyee Salary Details:\n");
               for(i = 0; i<n; i++)
               {
                printf("\nEmployee ID: %d\n", e[i].id);
                printf("Name: %s\n", e[i].name);
                printf("Basic Salary: %.2f\n", e[i].basic);
                printf("HRA: %.2f\n", e[i].hra);
                printf("DA: %.2f\n", e[i].da);
                printf("Gross Salary: %.2f\n", e[i].gross);
               }
               break;

               case 2:
                    found = 0;

                    printf("Enter Employee ID: ");
                    scanf("%d", &id);
                    for(i = 0; i<n; i++)
                    {
                        if(e[i].id == id)
                        {
                            printf("\nEmployee Found\n");
                            printf("Employee ID: %d\n", e[i].id);
                            printf("Name: %s\n", e[i].name);
                            printf("Basic Salary: %.2f\n", e[i].basic);
                            printf("HRA: %.2f\n", e[i].hra);
                            printf("DA: %.2f\n", e[i].da);
                            printf("Gross Salary: %.2f\n", e[i].gross);
                            
                            found = 1;
                            break;
                        }
                    }
                    if(found == 0)
                    {
                        printf("Employee not found.\n");
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