#include <stdio.h>

int main()
{
        int numberColumn, numberLine;

        printf("Type the number of lines:\n");
        scanf("%d", &numberLine);

        printf("Type the number of columns:\n");
        scanf("%d", &numberColumn);


        int matrix[numberLine][numberColumn];
        int product[numberColumn];

        for (int countLine = 0; countLine < numberLine; countLine++) {
                for (int countColumn = 0; countColumn < numberColumn; countColumn++) {
                        printf("Type the number of line %d and column %d:\n", countLine, countColumn);
                        scanf("%d", &matrix[countLine][countColumn]);

                        if (countLine == 0)
                                product[countColumn] = 1;

                        product[countColumn] *= matrix[countLine][countColumn];
                }
        }

        for (int count = 0; count < numberColumn; count++)
                printf("Product of column %d: %d\n", count, product[count]);

        return 0;
}
