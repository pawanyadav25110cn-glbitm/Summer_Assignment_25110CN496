#include <stdio.h>

int main()
{
    int roll[100], n, i, search, found = 0;
    char name[100][50];
    float marks[100];
    int choice;

    printf("Enter Number Of Students: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Student %d\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Name: ");
        scanf("%s", name[i]);

        printf("Marks: ");
        scanf("%f", &marks[i]);

    }
    do 
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Display All Students\n");
        printf("2. Search Student By Roll Number\n");
        printf("3. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\n----- Student Records -----\n");
                for(i = 0; i<n; i++)
                {
                    printf("\nRoll Number: %d\n", roll[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Marks: %.2f\n", marks[i]);
                }
                break;

                case 2:
                    found = 0;
                    printf("Enter Rol Numbre: ");
                    scanf("%d", &search);

                    for(i = 0; i<n; i++)
                    {
                        if(roll[i] == search)
                        {
                            printf("\nStudent Found\n");
                            printf("Roll Number: %d\n", roll[i]);
                            printf("Name: %s\n", name[i]);
                            printf("Marks: %.2f\n", marks[i]);

                            found = 1;
                            break;
                        }
                    }
                    if(found == 0)
                    {
                        printf("Student Not Found.\n");
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