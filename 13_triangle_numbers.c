#include <stdio.h>

int main()
{
  int inputUser, checkTriangularNumber;
  printf("Olá, usuário. Digite um número aleatório inteiro para sabermos se é triangular ou não:\n");
  scanf("%i", &inputUser);

  for (int i = 0; i < 100; i++)
  {
    checkTriangularNumber = (i * (i + 1)) / 2;
    if (inputUser == checkTriangularNumber)
    {
      printf("O número %i é triangular\n", inputUser);
      break;
    }
  }
  return 0;
}