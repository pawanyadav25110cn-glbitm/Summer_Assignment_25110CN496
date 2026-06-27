#include <stdio.h>

struct student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct student s[100];
    int n, i, choice, roll, found;

    printf("Enter number of student: ");
    scanf("%d", &n);

    for(i = 0; i<n; i++)
    {
        printf("\nEnter details of student%d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
    do
    {
        printf("\n===== Student Record Management =====\n");
        printf("1. Display all records\n");
        printf("2. Search student by roll number\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                 printf("\n Student Records\n");
                 for(i = 0; i<n; i++)
                 {
                    printf("Roll No: %d\n", s[i].roll);
                    printf("Name: %s\n", s[i].name);
                    printf("Marks: %.2f\n\n", s[i].marks);
                 }
                 break;

                 case 2:
                      found = 0;

                      printf("Enter Roll Number: ");
                      scanf("%d", &roll);

                      for(i = 0; i<n; i++)
                      {
                        if(s[i].roll == roll)
                        {
                            printf("\nStudent Found\n");
                            printf("Roll No: %d\n", s[i].roll);
                            printf("Name: %s\n", s[i].name);
                            printf("Marks: %.2f\n", s[i].marks);

                            found = 1;
                            break;
                        }
                      }
                      if(found == 0)
                      {
                        printf("student not found.\n");
                      }
                      break;

                      case 3:
                           printf("Exiting Program...\n");
                           break;

                           default:
                                printf("Invalid Choice!\n");
        }
    } while(choice != 3);

    return 0;
    
}