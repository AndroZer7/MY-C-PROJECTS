// The program dynamically allocates an array, takes user input, finds the minimum element using a function, prints the result, and frees the allocated memory.
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Call the function to find the minimum element.
int findMin(int *arr, int size);

int main()
{
    printf("The program dynamically allocates an array, takes user input, finds the minimum element using a function, prints the result, and frees the allocated memory.\n");
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

    // Call the function to find the minimum element.
    int minElement = findMin(arr, size);
    printf("The minimum element in the array is: %d\n", minElement);

    // Free the allocated memory.
    free(arr);

    return 0;
}
// Function to find the minimum element in an array.
int findMin(int *arr, int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}