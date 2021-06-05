#include <stdio.h>

void show_type_triangle(float sideX, float sideY, float sideZ)
{
        printf("Type of triangle based on side: ");
        if (sideX == sideY && sideY == sideZ)
                printf("Equilateral.\n");
        else if (sideX == sideY || sideY == sideZ || sideZ == sideX)
                printf("Isosceles.\n");
        else
                printf("Scalene.\n");
}

void check_is_triangle(float sideX, float sideY, float sideZ)
{
        if ((sideX <= sideY + sideZ) && (sideY <= sideX + sideZ) && (sideZ <= sideX + sideY)) {
               printf("It's triangle.\n");
               show_type_triangle(sideX, sideY, sideZ);
        } else
                printf("It's not a triangle.\n");

}

int main()
{
        float sideX, sideY, sideZ;

        printf("To check whether the sides form a triangle, we need only three sides (more will form a square, pentagon etc).\n");
        printf("Type the value of first side:\n");
        scanf("%f", &sideX);

        printf("Type the value of second side:\n");
        scanf("%f", &sideY);

        printf("Type the value of third side:\n");
        scanf("%f", &sideZ);

        check_is_triangle(sideX, sideY, sideZ);
}
