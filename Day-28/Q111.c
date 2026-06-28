#include <stdio.h>

struct Ticket
{
    int ticketNo;
    char name[50];
    int seats;
};

int main()
{
    struct Ticket t;
    int choice;
    int availableSeats = 50;

    do 
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Display Ticket Details\n");
        printf("3. Check Available Seats\n");
        printf("4. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Ticket Number: ");
                scanf("%d", &t.ticketNo);

                printf("Enter Passenger Name: ");
                scanf("%s", t.name);

                printf("Enter Number Of Seats: ");
                scanf("%d", &t.seats);

                if(t.seats <= availableSeats)
                {
                    availableSeats = availableSeats - t.seats;
                    printf("Ticket Booked Succesfully!\n");
                }
                else
                {
                    printf("Seats Not Available!\n");
                }
                break;

                case 2:
                    printf("\n===== TICKET DETAILS =====\n");
                    printf("Ticket Number: %d\n", t.ticketNo);
                    printf("Passenger Name: %s\n", t.name);
                    printf("Booked Seats: %d\n", t.seats);

                    break;

                    case 3:
                        printf("Available Seats = %d\n", availableSeats);
                        break;

                        case 4:
                            printf("Thank You!\n");
                            break;

                            default:
                            printf("Invalid Choice!\n");
        }
    }while(choice != 4);

    return 0;
}