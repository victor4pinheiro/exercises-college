#include <stdio.h>
#define MAX_NUMBERS 10

int main(void)
{

    float vetor[MAX_NUMBERS];

    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        printf("Digite o valor %d:\n", i + 1);
        scanf("%f", &vetor[i]);
    }

    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        if (vetor[i] == 30)
        {
            printf("Posição %d.\n", i);
        }
    }

    return 0;
}
