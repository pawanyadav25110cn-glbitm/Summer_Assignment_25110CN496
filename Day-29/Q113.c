#include <stdio.h>

int main()
{
    int choice;
    float num1, num2, result;

    do 
    {
        printf("\n===== MENU DRIVEN CALCULATOR=====\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Two Numbers: ");
                scanf("%f %f", &num1, &num2);
                result = num1 + num2;
                printf("Result = %.2f\n", result);
                break;

                case 2:
                    printf("Enter Two Numbers: ");
                    scanf("%f %f", &num1, &num2);
                    result = num1 - num2;
                    printf("Result = %.2f\n", result);
                    break;

                    case 3:
                    printf("Enter Two Numbers: ");
                    scanf("%f %f", &num1, &num2);
                    result = num1 * num2;
                    printf("Result = %.2f\n", result);
                    break;

                    case 4:
                    printf("Enter Two Numbers: ");
                    scanf("%f %f", &num1, &num2);
                    if(num2 != 0)
                    {
                        result = num1 / num2;
                        printf("Result = %.2f\n", result);

                    }
                    else
                    {
                        printf("Division By Zero Is Not Possible.\n");
                        
                    }
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