#include <stdio.h>
#include <malloc.h>

int main()
{
        int columns;
        int lines;

        printf("Type the number of lines:\n");
        scanf("%d", &lines);

        printf("Type the number of columns:\n");
        scanf("%d", &columns);

        int matrix[lines][columns];
        int sum = 0;

        for (int countLines = 0; countLines < lines; countLines++) {
                for (int countColumns = 0; countColumns < columns; countColumns++) {
                        printf("Type the value of line %d and column %d:\n", countLines + 1, countColumns + 1);
                        scanf("%d", &matrix[countLines][countColumns]);
                        sum += matrix[countLines][countColumns];
                }
        }

        printf("The sum of all values from matrix is %d.\n", sum);
        return 0;
}
