#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee e[100];
    int n, i, choice, id, found;

    printf("Enter Number Of Employee: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Employee %d\n", i+1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }

    do 
    {
        printf("\n===== MINI EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Display ALl Employees\n");
        printf("2. Search Employee By ID\n");
        printf("3. Update Salary\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Employee Details -----\n");
                for(i = 0;i<n;i++)
                {
                    printf("\nEmployee ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Salary: %.2f\n", e[i].salary);
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
                            printf("Salary: %.2f\n", e[i].salary);
                             
                                    found = 1;
                                    break;
                        }
                    }

                    if(found == 0)
                    {
                        printf("Employee Not Found.\n");
                    }
                    break;

                    case 3:
                       found = 0;

                       printf("Enter Employee ID: ");
                       scanf("%d", &id);

                       for(i = 0; i<n; i++)
                       {
                        if(e[i].id == id)
                        {
                            printf("Enter New Salary: ");
                            scanf("%f", &e[i].salary);

                            printf("Salary Updated Successfully!\n");
                            found = 1;
                            break;
                        }
                       }

                       if(found == 0)
                       {
                        printf("Employee Not Found.\n");
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