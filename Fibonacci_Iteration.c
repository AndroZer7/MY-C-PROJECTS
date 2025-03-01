// This program will print the Fibonacci series up to the number of terms entered by the user.
#include <stdio.h>

// Function to print Fibonacci series.
void Fibonacci(int n);

int main()
{
    printf("This program will print the Fibonacci series up to the number of terms entered by the user.\n");
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    Fibonacci(n);
    return 0;
}

// Function to print Fibonacci series.
void Fibonacci(int n)
{
    int a = 0, b = 1, temp;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", a);
        if (i < n)
        {
            printf(", ");
        }
        temp = a + b;
        a = b;
        b = temp;
    }
    printf("\n");
}