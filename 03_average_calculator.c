#include <stdio.h>

int main()
{
  float firstScore, secondScore, thirdScore, fourthScore, averageScore;

  printf("Olá, usuário\n");
  printf("Para fazer um cálculo de média, precisamos das quatro notas bimestrais.\n");

  printf("Digite o primeiro valor: ");
  scanf("%f", &firstScore);

  if (firstScore < 0 || firstScore > 10)
  {
    printf("Por favor, digite a primeira nota bimestral corretamente: ");
    scanf("%f", &firstScore);
  }

  printf("Digite o segundo valor: ");
  scanf("%f", &secondScore);

  if (secondScore < 0 || secondScore > 10)
  {
    printf("Por favor, digite a segunda nota bimestral corretamente: ");
    scanf("%f", &secondScore);
  }

  printf("Digite o terceiro valor: ");
  scanf("%f", &thirdScore);

  if (thirdScore < 0 || thirdScore > 10)
  {
    printf("Por favor, digite a terceira nota bimestral corretamente: ");
    scanf("%f", &thirdScore);
  }

  printf("Digite o quarto valor: ");
  scanf("%f", &fourthScore);

  if (fourthScore < 0 || fourthScore > 10)
  {
    printf("Por favor, digite a quarta nota bimestral corretamente: ");
    scanf("%f", &fourthScore);
  }

  averageScore = (firstScore + secondScore + thirdScore + fourthScore) / 4;

  printf("O resultado da média é %.2f\n", averageScore);
  return 0;
}
