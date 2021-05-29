#include <stdio.h>

int main()
{
  int currentAge;

  printf("Digite a sua idade, por favor: ");
  scanf("%i", &currentAge);

  if (currentAge < 16)
  {
    printf("Você faz parte da classe eleitoral não votante.\n");
  }
  else if (currentAge >= 18 && currentAge <= 65)
  {
    printf("Você faz parte da classe eleitoral votante tendo voto obrigatório.\n");
  }
  else
  {
    printf("Você faz parte da classe eleitoral com voto facultativo (opcional).\n");
  }

  return 0;
}
