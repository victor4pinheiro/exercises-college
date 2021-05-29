#include <stdio.h>

int main()
{
  int firstNumber, secondNumber;

  printf("Digite o primeiro número: ");
  scanf("%i", &firstNumber);
  printf("Digite o segundo número: ");
  scanf("%i", &secondNumber);

  if (firstNumber == secondNumber)
  {
    printf("Os números são iguais\n");
  }
  else if (firstNumber > secondNumber)
  {
    printf("O número %i é o maior\n", firstNumber);
  }
  else
  {
    printf("O número %i é o maior\n", secondNumber);
  }

  return 0;
}
