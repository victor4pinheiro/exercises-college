#include <stdio.h>

int main()
{
        int numberColumn, numberLine;

        printf("Type the number of lines:\n");
        scanf("%d", &numberLine);

        printf("Type the number of columns:\n");
        scanf("%d", &numberColumn);


        int matrix[numberLine][numberColumn];
        int transposeMatrix[numberColumn][numberLine];

        for (int countLine = 0; countLine < numberLine; countLine++) {
                for (int countColumn = 0; countColumn < numberColumn; countColumn++) {
                        printf("Type the value of line %d and column %d:\n", countLine + 1, countColumn + 1);
                        scanf("%d", &matrix[countLine][countColumn]);

                        transposeMatrix[countColumn][countLine] = matrix[countLine][countColumn];
                }
        }

        for (int countColumn = 0; countColumn < numberColumn; countColumn++) {
                for (int countLine = 0; countLine < numberLine; countLine++)
                        printf("%d ", transposeMatrix[countColumn][countLine]);
                printf("\n");
        }

        return 0;
}
