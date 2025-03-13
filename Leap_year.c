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
    return (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));
}
