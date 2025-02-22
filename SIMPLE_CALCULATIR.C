// This is a simple calculator by Debatra
#include <stdio.h>
#include <math.h>

void print_menu();

// Calculator functions
double Addition(double, double);
double Subtraction(double, double);
double Multiplication(double, double);
double Division(double, double);
int Modulus(int, int);
double Power(double, double);

int main()
{
    printf("\n\nWelcome to Simple Calculator by Debatra\n\n");

    int input;
    double num1, num2, result;

    while (1)
    {
        print_menu();
        scanf("%d", &input);

        if (input == 7)
        {
            printf("Exiting the calculator. Thank you!\n");
            break;
        }
        else if (input <= 0 || input > 7)
        {
            fprintf(stderr, "Invalid menu choice!\n");
            printf("Invalid menu choice!\n");
            // break;
            continue;
        }

        printf("Please enter the 1st number: ");
        scanf("%lf", &num1);
        printf("Please enter the 2nd number: ");
        scanf("%lf", &num2);

        switch (input)
        {
        case 1: // Addition
            result = Addition(num1, num2);
            break;
        case 2: // Subtraction
            result = Subtraction(num1, num2);
            break;
        case 3: // Multiplication
            result = Multiplication(num1, num2);
            break;
        case 4: // Division
            result = Division(num1, num2);
            break;
        case 5: // Modulus
            result = Modulus(num1, num2);
            break;
        case 6: // Power
            result = Power(num1, num2);
            break;
        default:
            printf("Invalid input. Please try again.\n");
            break;
        }

        printf("The result is: %.2f\n\n", result);
    }

    return 0;
}

// Function to display the menu
void print_menu()
{
    printf("===================================\n");
    printf("Choose one of the following options:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
    printf("Enter your input: ");
}

// Calculator functions

// Addition
double Addition(double num1, double num2)
{
    return num1 + num2;
}

// Subtraction
double Subtraction(double num1, double num2)
{
    return num1 - num2;
}

// Multiplication
double Multiplication(double num1, double num2)
{
    return num1 * num2;
}

// Division
double Division(double num1, double num2)
{
    if (num2 == 0)
    {
        fprintf(stderr, "Division by zero is not allowed!");
    }
    return num1 / num2;
}

// Modulus (only works for integers)
int Modulus(int num1, int num2)
{
    if (num2 == 0)
    {
        fprintf(stderr, "Modulus by zero is not allowed!");
    }
    if (num2 == 0)
    {
        return (int)num1 % (int)num2;
    }
    return num1 % num2;
}

// Power
double Power(double num1, double num2)
{
    return pow(num1, num2);
}
