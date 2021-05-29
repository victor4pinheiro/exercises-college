#include <stdio.h>

int main()
{
  float triangleArea, base, height;

  printf("Olá, usuário.\n");
  printf("Para calcular a área do triângulo, precisamos que digite o valor da base: ");
  scanf("%f", &base);
  printf("Também digite o valor da altura: ");
  scanf("%f", &height);

  triangleArea = (base * height) / 2;

  printf("A área do triângulo é %f\n", triangleArea);

  return 0;
}
