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

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter details of employee %d\n", i+1);

        printf("Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Name: ");
        scanf("%s", e[i].name);

        printf("Salary: ");
        scanf("%f", &e[i].salary);
    }
    do 
    {
        printf("\n===== Employee Management System =====\n");
        printf("1. Display all employees\n");
        printf("2. Search Employee by ID\n");
        printf("3. Exit\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEmployee Records:\n");

                for(i = 0; i<n; i++)
                {
                    printf("Employee ID: %d\n", e[i].id);
                    printf("Name: %s\n", e[i].name);
                    printf("Salary: %2.f\n\n", e[i].salary);
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
                            printf("Employee Id: %d\n", e[i].id);
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
                         printf("Exiting Program...\n");
                         break;

                         default: 
                             printf("Invalid Choice!\n");
        }
    }while(choice != 3);

    return 0;
}