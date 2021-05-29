#include <stdio.h>

int main(void)
{
  int matriculasAlunosProgramacaoDeComputadores[1];
  int matriculasAlunosCalculoNumerico[2];

  printf("Disciplina \"Programação de Computadores\"\n");
  for (int count = 0; count < 150; count++)
  {
    printf("Digite a matricula do aluno %i:\n", count + 1);
    scanf("%i", &matriculasAlunosProgramacaoDeComputadores[count]);
  }

  printf("###########################################\n");
  printf("Disciplina \"Cálculo Numérico\"\n");
  for (int count = 0; count < 220; count++)
  {
    printf("Digite a matricula do aluno %i:\n", count + 1);
    scanf("%i", &matriculasAlunosCalculoNumerico[count]);
  }

  for (int count = 0; count < 150; count++)
  {
    for (int secondCount = 0; secondCount < 220; secondCount++)
    {
      if (matriculasAlunosProgramacaoDeComputadores[count] == matriculasAlunosCalculoNumerico[secondCount])
      {
        printf("O estudante, matrícula %i, está cursando as duas disciplinas.\n", matriculasAlunosCalculoNumerico[count]);
      }
    }
  }

  return 0;
}