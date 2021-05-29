#include <stdio.h>
#include <math.h>

int main()
{
  int valueA;
  double sumGeometricSequence;

  printf("Olá, usuário.\n");
  printf("Digite o valor A para que possamos calcular a soma da progressão geométrica:\n");
  scanf("%i", &valueA);

  sumGeometricSequence = ((1 - pow(0.5, 10)) * (7 * valueA) / 3) / 0.5;
  printf("Soma da progressão geométrica: %lf", sumGeometricSequence);

  return 0;
}