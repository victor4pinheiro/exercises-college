#include <stdio.h>
#define MAX_NUMBER_ARRAY 10

int main()
{
        int firstArray[MAX_NUMBER_ARRAY], secondArray[MAX_NUMBER_ARRAY];

        for (int count = 0; count < MAX_NUMBER_ARRAY; count++) {
                printf("Digite o valor %i do primeiro vetor:\n", count + 1);
                scanf("%d", &firstArray[count]);
        }

        for (int count = 0; count < MAX_NUMBER_ARRAY; count++) {
                printf("Digite o valor %i do segundo vetor:\n", count + 1);
                scanf("%d", &secondArray[count]);
        }

        printf("Vetor resultante:\n");
        for (int count = 0; count < MAX_NUMBER_ARRAY; count++)
                printf("[%d] ", firstArray[count] * secondArray[count]);
        return 0;
}
