#include <stdio.h>

int check_leap_year(int year)
{
        int status = 0;

        if (year % 4 == 0 && year % 100 != 0)
                status = 1;
        else if (year % 400 == 0)
                status = 1;
        else
                status = 0;

        return status;
}

int main()
{
        int year;
        
        printf("Type a year:\n");
        scanf("%d", &year);

        int statusLeapYear = check_leap_year(year);

        if (statusLeapYear == 1)
                printf("It's a leap year.\n");
        else
                printf("It's not a leap year.\n");

        return 0;
}
