#include <stdio.h>

int main()
{
  float a, b, c;

  printf("Olá, usuário.\n");
  printf("Digite o valor do primeiro lado:\n");
  scanf("%f", &a);

  printf("Digite o valor do segundo lado:\n");
  scanf("%f", &b);

  printf("Digite o valor do terceiro lado:\n");
  scanf("%f", &c);

  if (a == b && a == c)
  {
    printf("Equilátero\n");
  }
  else if (a != b && a != c && b != c)
  {
    printf("Escaleno\n");
  }
  else
  {
    printf("Isósceles\n");
  }

  return 0;
}