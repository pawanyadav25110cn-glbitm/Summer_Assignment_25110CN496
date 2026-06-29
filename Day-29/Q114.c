#include <stdio.h>

int main()
{
    int arr[100], n, i, choice, sum, max;

    do 
    {
        printf("\n===== ARRAY OPERATING SYSTEM =====\n");
        printf("1. Input Array\n");
        printf("2. Display Array\n");
        printf("3. Find Largest Element\n");
        printf("4. Find Sum Of Elements\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Number Of Elements: ");
                scanf("%d", &n);
                printf("Enter %d Elements:\n", n);

                for(i = 0; i<n; i++)
                {
                    scanf("%d", &arr[i]);
                }
                printf("Array Sorted Succesfully!\n");
                break;

                case 2:
                    printf("Array Elements:\n");
                    for(i = 0; i<n; i++)
                    {
                        printf("%d", arr[i]);
                    }
                    printf("\n");
                    break;

                    case 3:
                       max = arr[0];
                       for(i = 1; i<n; i++)
                       {
                        if(arr[i]>max)
                        max = arr[i];
                       }
                       printf("Largest Element = %d\n", max);
                       break;

                       case 4:
                       sum = 0; 
                       for( i = 0; i<n; i++)
                       {
                        sum += arr[i];
                       }
                       printf("Sum Of Elements: %d\n", sum);
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