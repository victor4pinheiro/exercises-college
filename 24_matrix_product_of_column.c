#include <stdio.h>

int main()
{
        int numberColumn, numberLine;

        printf("Type the number of lines:\n");
        scanf("%d", &numberLine);

        printf("Type the number of columns:\n");
        scanf("%d", &numberColumn);


        int array[numberLine][numberColumn];

        return 0;
}
