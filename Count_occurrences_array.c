#include <stdio.h>
#include <stdlib.h>

// Function to count occurrences of a value in an array.
int countOccurrences(int *arr, int size, int value);

int main()
{
    printf("The program dynamically allocates an array, takes user input, and counts the occurrences of a value in the array.\n");
    int size, value;
    int *arr; // Use a pointer for dynamic memory allocation.

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        printf("Invalid input. Please enter a positive integer for the size.\n");
        return 1;
    }

    // Allocate memory dynamically.
    arr = malloc(size * sizeof(int));

    // Check if malloc was successful.
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input. Please enter an integer.\n");
            free(arr);
            return 1;
        }
    }

    printf("Enter the value to count: ");
    if (scanf("%d", &value) != 1)
    {
        printf("Invalid input. Please enter an integer.\n");
        free(arr);
        return 1;
    }

    // Call the function to count occurrences.
    int count = countOccurrences(arr, size, value);
    printf("The value %d occurs %d times in the array.\n", value, count);

    // Free the allocated memory.
    free(arr);

    return 0;
}

// Function to count occurrences of a value in an array.
int countOccurrences(int *arr, int size, int value)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            count++;
        }
    }
    return count;
}
