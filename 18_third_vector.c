#include <stdio.h>

int main(void)
{
  int firstVector[10], secondVector[10], thirdVector[10];

  printf("Para o primeiro vetor:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor %d:\n", i + 1);
    scanf("%i", &firstVector[i]);
  }

  printf("Para o segundo vetor:\n");
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor %d:\n", i + 1);
    scanf("%i", &secondVector[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    thirdVector[i] = firstVector[i] + secondVector[i];
    printf("Valor %i: %i\n", i + 1, thirdVector[i]);
  }

  return 0;
}
