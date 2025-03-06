// This programme will calculate roots of a quadratic equation

#include <stdio.h>
#include <math.h>

void calculateRoots(double a, double b, double c);

int main()
{
    printf("Quadratic Equation Solver\n");
    double a, b, c;

    printf("Enter coefficients a, b and c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3)
    {
        printf("Invalid input. Please enter three numerical values.\n");
        return 0;
    }
    if (a == 0)
    {
        printf("Coefficient 'a' cannot be zero in a quadratic equation.\n");
        return 0;
    }

    calculateRoots(a, b, c);

    return 0;
}

void calculateRoots(double a, double b, double c)
{
    double discriminant, root1, root2, realPart, imaginaryPart;

    discriminant = b * b - 4 * a * c;

    // Check the nature of the roots
    if (discriminant > 0)
    {
        // Two distinct and real roots
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2lf\n", root1);
        printf("Root 2 = %.2lf\n", root2);
    }
    else if (discriminant == 0)
    {
        // Two equal and real roots
        root1 = root2 = -b / (2 * a);
        printf("Roots are real and the same.\n");
        printf("Root 1 = Root 2 = %.2lf\n", root1);
    }
    else
    {
        // Complex roots
        realPart = -b / (2 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2lf + %.2lfi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2lf - %.2lfi\n", realPart, imaginaryPart);
    }
}