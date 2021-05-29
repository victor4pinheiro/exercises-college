#include <stdio.h>
#define MAX_NUMBER_SCORES 10

int main(void)
{
  float scores[10], averageScores = 0;

  for (int i = 0; i < MAX_NUMBER_SCORES; i++)
  {
    printf("Digite a nota %i:\n", i + 1);
    scanf("%f", &scores[i]);

    while (scores[i] > 10 || scores[i] < 0)
    {
      printf("Digite a nota %i corretamente:\n", i + 1);
      scanf("%f", &scores[i]);
    }

    averageScores += scores[i];
  }

  averageScores /= 10;
  printf("Média:  %f\n", averageScores);
  printf("Notas maiores que a média:\n");

  for (int i = 0; i < MAX_NUMBER_SCORES; i++)
  {
    if (scores[i] > averageScores)
    {
      printf("Nota %i: %.2f\n", i + 1, scores[i]);
    }
  }

  return 0;
}
