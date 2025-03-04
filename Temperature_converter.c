// This programme will convert temperature from Celsius to Fahrenheit and Fahrenheit to Celsius according to user needs.
#include <stdio.h>

// Function prototypes with improved types
float CtoF(float celsius);
float FtoC(float fahrenheit);

int main()
{
    printf("This program converts temperature according to the user.\n");
    int choice;
    float temp, result;

    printf("Enter 1 to convert Celsius to Fahrenheit\n");
    printf("Enter 2 to convert Fahrenheit to Celsius\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    switch (choice)
    {
    case 1:
        printf("Enter temperature in Celsius: ");
        if (scanf("%f", &temp) == 1)
        {
            result = CtoF(temp);
            printf("Temperature in Fahrenheit: %.2f\n", result);
        }
        break;
    case 2:
        printf("Enter temperature in Fahrenheit: ");
        if (scanf("%f", &temp) == 1)
        {
            result = FtoC(temp);
            printf("Temperature in Celsius: %.2f\n", result);
        }
        break;
    default:
        printf("Invalid choice\n");
        return 1;
    }

    return 0;
}

float CtoF(float celsius)
{
    return (celsius * 9.0f / 5.0f) + 32.0f;
}

float FtoC(float fahrenheit)
{
    return (fahrenheit - 32.0f) * 5.0f / 9.0f;
}