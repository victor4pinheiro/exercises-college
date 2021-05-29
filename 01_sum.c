#include <stdio.h>

int main()
{
  float firstValue, secondValue, resultSum;

  printf("Olá, usuário.\n");
  printf("Para a soma de dois valores aleatórios, digite o primeiro:\n");
  scanf("%f", &firstValue);

  printf("Agora digite o segundo valor:\n");
  scanf("%f", &secondValue);

  resultSum = firstValue + secondValue;

  printf("O resultado da soma é %f\n", resultSum);

  return 0;
}
