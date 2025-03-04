// This program checks if a year is a leap year or not.
#include <stdio.h>

// Function to check if a year is a leap year or not.
int isLeapYear(int year);

int main()
{
    printf("This program checks if a year is a leap year or not.\n");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (isLeapYear(year))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }
    return 0;
}

// Function to check if a year is a leap year or not.
int isLeapYear(int year)
{
    if (year % 400 == 0)
    {
        return 1;
    }
    else if (year % 100 == 0)
    {
        return 0;
    }
    else if (year % 4 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
