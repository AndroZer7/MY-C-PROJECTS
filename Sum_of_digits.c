// Function to calculate the sum of digits of a integer number.

#include <stdio.h>

int sumOfDigits(int num);
int main()
{
    printf("This programe will calculate the sum of digits of a integer\n");
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigits(number);
    printf("Sum of digits of %d is %d\n", number, result);

    return 0;
}

int sumOfDigits(int num)
{
    if (num < 0)
    {
        num = -num; // Convert negative to positive
    }
    int sum = 0;
    int remainder;

    while (num != 0)
    {
        remainder = num % 10; // Get the last digit
        sum += remainder;     // Add it to the sum
        num = num / 10;       // Remove the last digit
    }
    return sum;
}