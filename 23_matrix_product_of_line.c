#include <stdio.h>

int main()
{
        int matrix[4][4], productLineMatrix[4] = {1, 1, 1, 1};

        for (int countLine = 0; countLine < 4; countLine++) {
                for (int countColumn = 0; countColumn < 4; countColumn++) {
                        printf("Digite o valor da linha %d e coluna %d:\n", countLine, countColumn);
                        scanf("%d", &matrix[countLine][countColumn]);
                        productLineMatrix[countLine] *= matrix[countLine][countColumn];
                }
                printf("\n");
        }

        for (int count = 0; count < 4; count++)
                printf("Produto da linha %d: %d\n", count, productLineMatrix[count]);

        return 0;
}
