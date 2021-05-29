#include <stdio.h>

int main()
{
        float scores[10], smallestScore;

        for (int maxNumbersScore = 0; maxNumbersScore < 10; maxNumbersScore++) {
                printf("Digite a nota %i:\n", maxNumbersScore + 1);
                scanf("%f", &scores[maxNumbersScore]);

                if (maxNumbersScore == 0)
                        smallestScore = scores[0];

                if (maxNumbersScore != 0 && smallestScore > scores[maxNumbersScore])
                        smallestScore = scores[maxNumbersScore];
        }

        printf("A menor nota é %f", smallestScore);
        return 0;
}
