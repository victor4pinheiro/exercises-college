#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 1000

int main()
{
  int age;
  char *name = (char *)malloc(sizeof(char));

  printf("Olá, usuário\n");
  printf("Qual é o seu nome?\n");
  fgets(name, MAX_LENGTH, stdin);
  printf("Agora digite a sua idade para conferirmos em qual categoria você se encaixa:\n");
  scanf("%i", &age);

  printf("Nome: %s", name);
  switch (age)
  {
  case 5 ... 10:
    printf("Categoria: Infantil\n");
    break;
  case 11 ... 15:
    printf("Categoria: Juvenil\n");
    break;
  case 16 ... 20:
    printf("Categoria: Júnior\n");
    break;
  case 21 ... 25:
    printf("Categoria: Profissional\n");
    break;
  default:
    printf("Sem categoria\n");
    break;
  }

  free(name);
  return 0;
}