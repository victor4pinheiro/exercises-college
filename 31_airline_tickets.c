#include <stdio.h>
#include <stdbool.h>
#define FALSE 0
#define TRUE 1

int availableFlights = 37;
int totalFlights[] = {3056, 3927, 8885, 2627, 6884, 5104, 7447, 1057, 7828, 5900, 4396, 8339, 3296, 1464, 4910, 9881, 7067, 2574, 1387, 9026, 1929, 360, 982, 2986, 4867, 9613, 9621, 3208, 2977, 6458, 5728, 2825, 6358, 8969, 6226, 3885, 4963};
int totalSeatsFlight[] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};

struct ReservationRequest {
        int idCard;
        int chosenNumberFlight;
};

void list_flights()
{
        for (int count = 0; count < availableFlights; count++)
                printf("Flight %d\n", totalFlights[count]);
}

int check_seats(int position)
{
        int seats = FALSE;

        if (totalSeatsFlight[position] > 0)
                seats = totalSeatsFlight[position];
        return seats;
}

int update_available_seats(int position, int chosenNumberFlight)
{
        int status;
        int seatsAvailable = check_seats(position);
        
        if (seatsAvailable == FALSE) {
                printf("Sorry. There are not available seats.\n");
                status = FALSE;
        } else {
                printf("There are %d available seats.\n", seatsAvailable);
                printf("Do you want to buy a seat?\n");
                printf("If yes, type 1.\n");
                printf("If no, type 0.\n");
                scanf("%d", &status);
        }

        if (status == TRUE)
                --totalSeatsFlight[position];
        return status;
}

int update_available_flights(int chosenNumberFlight)
{
        int position = -1;
        int status = FALSE;
        int *newAvailableFlights;
        newAvailableFlights = &availableFlights;

        for (int count = 0; count < availableFlights; count++) {
                if (totalFlights[count] == chosenNumberFlight) {
                        position = count;
                        break;
                }
        }

        if (position != -1) {
                status = update_available_seats(position, chosenNumberFlight);

                if (status == TRUE) {
                        if (totalFlights[position] <= 0) {
                                for (int count = position; count < availableFlights - 1; count++) {
                                        totalFlights[count] = totalFlights[count + 1];
                                        totalSeatsFlight[count] = totalSeatsFlight[count + 1];
                                }
                                --*newAvailableFlights;

                        }
                }
        }

        return status;
}

int check_flight(int idCard, int chosenNumberFlight)
{
        int status = update_available_flights(chosenNumberFlight);

        if (status == TRUE) {
                printf("Reserved air ticket for %d and flight %d\n", idCard, chosenNumberFlight);
        }

        return status;
}

int book_flight(int idCard, int chosenNumberFlight)
{
        int statusBookFlight;

        while (statusBookFlight != FALSE) {
                printf("To book a flight, we need you type your id card and chosen number of flight.\n");
                printf("Id card:\n");
                scanf("%d", &idCard);
        
                printf("Chosen number of flight:\n");
                scanf("%d", &chosenNumberFlight);

                int statusReservationQuest = check_flight(idCard, chosenNumberFlight);

                if (statusReservationQuest == FALSE) {
                        printf("The chosen flight is not available more. Do you want to choose another?\n");
                        printf("To choose another, type 1.\n");
                        printf("To quit, type 0.\n");
                        scanf("%d", &statusBookFlight);
                } else
                        statusBookFlight = FALSE;
        }
}

int main()
{
        struct ReservationRequest ReservationRequests;
        int statusBook;

        printf("Welcome!\n");

        while (statusBook != 3) {
                printf("What do you want to do?\n");
                printf("To book a flight, type 1.\n");
                printf("To list all available flights, type 2.\n");
                printf("To quit, type 3.\n");
                scanf("%d", &statusBook);

                if (statusBook == 1)
                        book_flight(ReservationRequests.idCard, ReservationRequests.chosenNumberFlight);
                else if (statusBook == 2)
                        list_flights();
                else
                        printf("Goodbye!\n");
        }

       return 0;
}
