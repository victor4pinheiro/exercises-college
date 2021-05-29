#include <stdio.h>

int main()
{
  float circleArea, radius, pi = 3.14159;

  printf("Olá, usuário.\n");
  printf("Para calcular a área do círculo, precisamos que digite o valor do raio: ");
  scanf("%f", &radius);

  circleArea = pi * (radius * radius);

  printf("A área do círculo é %f\n", circleArea);

  return 0;
}
