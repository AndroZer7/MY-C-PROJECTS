// The program dynamically allocates an array, takes user input, finds the Maximum element using a function, prints the result, and frees the allocated memory.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to find the maximum element in an array.
int findMax(int *arr, int size);

int main()
{
    printf("The program dynamically allocates an array, takes user input, finds the Maximum element using a function, prints the result, and frees the allocated memory.\n");
    int size;
    int *arr; // Use a pointer for dynamic memory allocation.

    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Allocate memory dynamically.
    arr = malloc(size * sizeof(int));

    // Check if malloc was successful.
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function to find the maximum element.
    int maxElement = findMax(arr, size);
    printf("The maximum element in the array is: %d\n", maxElement);

    // Free the allocated memory.
    free(arr);

    return 0;
}

// Function to find the maximum element in an array.
int findMax(int *arr, int size)
{
    int max = INT_MIN; // Initialize to the smallest possible integer.
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}