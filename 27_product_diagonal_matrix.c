#include <stdio.h>

int main()
{
        int numberColumn, numberLine;

        printf("Type the number of lines:\n");
        scanf("%d", &numberLine);

        printf("Type the number of columns:\n");
        scanf("%d", &numberColumn);


        int matrix[numberLine][numberColumn];
        int productDiagonal = 1;

        for (int countLine = 0; countLine < numberLine; countLine++) {
                for (int countColumn = 0; countColumn < numberColumn; countColumn++) {
                        printf("Type the value of line %d and column %d:\n", countLine + 1, countColumn + 1);
                        scanf("%d", &matrix[countLine][countColumn]);

                        if (countLine == countColumn) {
                                productDiagonal *= matrix[countLine][countColumn];
                        }
                }
        }

        printf("The product of main diagonal is %d.\n", productDiagonal);

        return 0;
}
