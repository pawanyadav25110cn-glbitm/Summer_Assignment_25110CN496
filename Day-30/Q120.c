#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void addStudents(struct Student s[], int n)
{
    int i;
    for(i = 0; i<n; i++)
    {
        printf("\nEnter Details Of Student %d\n", i+1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudents(struct Student s[], int n)
{
    int i;

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i<n; i++)
    {
        printf("\nRoll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);
    }
}

void searchStudents(struct Student s[], int n)
{
int i, roll, found = 0;

printf("Enter Roll Number To Search: ");
scanf("%d", &roll);

for(i = 0; i<n; i++)
{
    if(s[i].roll == roll)
    {
        printf("\nStudent Found\n");
        printf("Roll Number: %d\n", s[i].roll);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %.2f\n", s[i].marks);

        found = 1;
        break;
    }
}
    if(found == 0)
    {
        printf("Student Not Found.\n");
    }
}
void updateMarks(struct Student s[], int n)
{
    int i, roll, found = 0;

    printf("Enter Roll Number: ");
    scanf("%d", &roll);

    for(i = 0; i<n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("Enter New Marks: ");
            scanf("%f", &s[i].marks);

            printf("Marks Updated Successfully!\n");
                    found = 1;
                    break;
        }
    }
          if(found == 0)
          {
            printf("Student Not Found.\n");
          }
}
     int main()
     {
        struct Student s[100];
        int n, choice;

        printf("Enter Number Of Student: ");
        scanf("%d", &n);

        addStudents(s, n);

        do 
        {
            printf("\n===== STUDENT RECORD MANAGEMENT SYSTEM =====\n");
            printf("1. Display All Students\n");
            printf("2. Search Student By Roll Number\n");
            printf("3. Update Marks\n");
            printf("4. Exit\n");

            printf("Enter Your Choice: ");
            scanf("%d", &choice);

            switch(choice)
        {
            case 1:
               displayStudents(s, n);
               break;

               case 2:
                  searchStudents(s, n);
                  break;

                  case 3:
                      updateMarks(s, n);
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