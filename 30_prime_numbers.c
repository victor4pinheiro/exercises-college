#include <stdio.h>
#define ERROR 1

int check_number_is_prime(int number)
{
        int status = 0;
        for (int count = 2; count < number; count++) {
                if (number % count == 0) {
                        status = ERROR;
                        break;
                }
        }

        return status;
}

int main()
{
        int number, statusPrime;

        printf("Type any number:\n");
        scanf("%d", &number);

        if (number == 1)
                printf("Não é primo.\n");
        else {
                statusPrime = check_number_is_prime(number);
        
                if (statusPrime == 1)
                        printf("Não é primo");
                else
                        printf("É primo");

        }

        return 0;
}
