#include <stdio.h>

// Function to calculate Fibonacci using recursion
int Fibonacci(int n);

int main()
{
    printf("This program prints the Fibonacci series up to the number of terms entered by the user (Recursion).\n");

    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number must be greater than 0.\n");
        return 1;
    }

    printf("Fibonacci series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", Fibonacci(i));
        if (i < n - 1)
        {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
// Function to calculate Fibonacci using recursion
int Fibonacci(int n)
{
    if (n < 0)
    {
        printf("Number must be greater than or equal to 0\n");
        return -1;
    }
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    return Fibonacci(n - 1) + Fibonacci(n - 2);
}
