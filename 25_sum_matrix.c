/*
 * Create an algorithm that reads two matrices 2x5 and store the sums of elements with same index in another matrix 2x5
 * */

#include <stdio.h>

int main()
{
        int matrices[2][2][5] = {};
        int matrixResultSum[2][5] = {};
        int numberIndex;

        for (int countMatrix = 0; countMatrix < 2; countMatrix++) {
                for (int countLine = 0; countLine < 2; countLine++) {
                        for (int countColumn = 0; countColumn < 5; countColumn++) {
                                printf("Type the number of line %d and column %d of matrix %d:\n", countLine, countColumn, countMatrix);
                                scanf("%d", &matrices[countMatrix][countLine][countColumn]);

                                matrixResultSum[countLine][countColumn] += matrices[countMatrix][countLine][countColumn];
                        }
                        printf("\n");
                }
                printf("\n");
        }

        for (int countLine = 0; countLine < 2; countLine++) {
                for (int countColumn = 0; countColumn < 5; countColumn++)
                        printf("%d\n", matrixResultSum[countLine][countColumn]);
        }

        return 0;
}
