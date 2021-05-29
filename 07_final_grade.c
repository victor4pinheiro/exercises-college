#include <stdio.h>

int main()
{
  float score1, score2, score3, score4, finalGrade;

  printf("Digite a primeira nota bimestral: ");
  scanf("%f", &score1);

  printf("Digite a segunda nota bimestral: ");
  scanf("%f", &score2);

  printf("Digite a terceira nota bimestral: ");
  scanf("%f", &score3);

  printf("Digite a quarta nota bimestral: ");
  scanf("%f", &score4);

  finalGrade = (score1 + score2 + score3 + score4) / 4;

  if (finalGrade >= 5)
  {
    printf("Aprovado\n");
  }
  else
  {
    printf("Reprovado\n");
  }

  return 0;
}
