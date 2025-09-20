// Write a program to check whether a given year is a leap year or not.

#include <stdio.h>
void main()
{
    int year;
    printf("enter a year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("the year is leap year");
            }
            else
            {
                printf("the year is not a leap year");
            }
        }
        else
        {
            printf("the year is a leap year");
        }
    }
    else
    {
        printf("the year is not a leap year");
    }
}