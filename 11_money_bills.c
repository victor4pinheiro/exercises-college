#include <stdio.h>

int main()
{
  int money, amountMoneyBills[3];
  int moneyBills[] = {50, 10, 1};
  printf("Olá, usuário.\n");
  printf("Quanto em dinheiro tem para se pagar com notas de 50, 10 e 1?");
  scanf("%i", &money);

  for (int count = 0; count < 3; count++)
  {
    amountMoneyBills[count] = money / moneyBills[count];
    money = money % moneyBills[count];
  }

  printf("Você precisa de:\n");
  for (int count = 0; count < 3; count++)
  {
    printf("%i notas de R$ %i,00\n", amountMoneyBills[count], moneyBills[count]);
  }

  return 0;
}