#include <stdio.h>

int main()
{
  float firstValue, secondValue;

  printf("Olá, usuário.\n");
  printf("Para podermos fazer um cálculo envolvendo as quatro operações básicas, digite o primeiro número aleatório:\n");
  scanf("%f", &firstValue);

  printf("Agora digite o segundo valor:\n");
  scanf("%f", &secondValue);

  printf("Calculadora\n");
  printf("Soma: %f\n", firstValue + secondValue);
  printf("Subtração: %f\n", firstValue - secondValue);
  printf("Multiplicação: %f\n", firstValue * secondValue);
  printf("Divisão: %f\n", firstValue / secondValue);

  return 0;
}
