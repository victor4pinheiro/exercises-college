#include <stdio.h>
#define MAX_NUMBERS 10

int main(void)
{

    float scores[MAX_NUMBERS], highestValue = 0;

    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        printf("Digite o valor %d:\n", i + 1);
        scanf("%f", &scores[i]);
    }

    highestValue = scores[0];

    for (int i = 0; i < MAX_NUMBERS; i++)
    {
        if (highestValue < scores[i])
        {
            highestValue = scores[i];
        }
    }

    printf("Maior valor: %.2f\n", highestValue);

    return 0;
}
