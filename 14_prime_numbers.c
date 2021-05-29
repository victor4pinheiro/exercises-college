#include <stdio.h>

int main()
{
  int inputUser, countPrime = 1;

  printf("Olá, usuário. Digite um número aleatório para sabermos se é primo ou não:\n");
  scanf("%i", &inputUser);

  if (inputUser == 1)
  {
    printf("%d não é um número primo.\n", inputUser);
  }
  else
  {
    for ( int count = 2; count < inputUser; count++)
    {
      if ((inputUser % count) == 0)
      {
        countPrime = 0;
      }
    }

    if (countPrime == 1)
      printf("%d é um número primo.\n", inputUser);
    else
      printf("%d não é um número primo.\n", inputUser);
  }
  return 0;
}