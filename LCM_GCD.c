// This programme will take two numbers as input and calculate their LCM and GCD.
#include <stdio.h>
#include <stdlib.h>

int gcdcount(int num1, int num2);
int lcmcount(int num1, int num2);

int main()
{
    printf("This programme will take two numbers as input and calculate their LCM and GCD.\n");
    int num1, num2;

    printf("Enter 1st number: ");
    scanf("%d", &num1);
    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0)
    {
        printf("Error: Numbers cannot be zero\n");
        return 1;
    }

    // Use absolute values for calculations
    int abs_num1 = abs(num1);
    int abs_num2 = abs(num2);

    printf("The LCM of %d and %d is: %d\n", num1, num2, lcmcount(abs_num1, abs_num2));
    printf("The GCD of %d and %d is: %d\n", num1, num2, gcdcount(abs_num1, abs_num2));

    return 0;
}

// GCD COUNTER using Euclidean algorithm
int gcdcount(int num1, int num2)
{
    int remainder;

    while (num2 != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    return num1;
}

// LCM COUNTER using GCD
int lcmcount(int num1, int num2)
{
    int gcd = gcdcount(num1, num2);
    return (num1 * num2) / gcd;
}
