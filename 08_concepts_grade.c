#include <stdio.h>

int main()
{
  float score1, score2, score3, finalConceptGrade;

  printf("Digite a primeira nota bimestral: ");
  scanf("%f", &score1);

  printf("Digite a segunda nota bimestral: ");
  scanf("%f", &score2);

  printf("Digite a terceira nota bimestral: ");
  scanf("%f", &score3);

  finalConceptGrade = (score1 + score2 + score3) / 3;

  if (finalConceptGrade < 5)
  {
    printf("Conceito C\n");
  }
  else if (finalConceptGrade < 7)
  {
    printf("Conceito B\n");
  }
  else
  {
    printf("Conceito A\n");
  }

  return 0;
}
