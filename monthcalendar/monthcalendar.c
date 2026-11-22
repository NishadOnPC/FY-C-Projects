#include <stdio.h>
#include <time.h>

int main()
{
    int year, startDay, weekDay, m, day, space;
    struct tm date = {0};

    char months[12][10] =
    {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };

    int days_in_month[12] =
    {
        31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    printf("Enter the year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        days_in_month[1] = 29;
    }

    date.tm_year = year - 1900;
    date.tm_mon = 0;
    date.tm_mday = 1;
    date.tm_hour = 12;
    mktime(&date);

    startDay = date.tm_wday;

    for (m = 0; m < 12; m++)
    {
        printf("\n  ------------ %s %d ------------\n", months[m], year);
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

        for (space = 0; space < startDay; space++)
        {
            printf("     ");
        }

        weekDay = startDay;

        for (day = 1; day <= days_in_month[m]; day++)
        {
            printf("%5d", day);
            weekDay++;

            if (weekDay == 7)
            {
                printf("\n");
                weekDay = 0;
            }
        }

        if (weekDay != 0)
        {
            printf("\n");
        }

        startDay = weekDay;
    }

    return 0;
}
