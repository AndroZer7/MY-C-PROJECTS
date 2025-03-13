// This programme uses bubble sort method to sort the elements in an array.
#include <stdio.h>

// Function prototypes
void Ascending_Bubble_Sort(int arr[], int n);
void Descending_Bubble_Sort(int arr[], int n);

int main()
{
    printf("This programme uses bubble sort method to sort the elements in an array.\n");

    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n], arr_copy[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
        arr_copy[i] = arr[i]; // Copy the original array
    }

    printf("Your original array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Ascending Bubble Sort
    Ascending_Bubble_Sort(arr, n);
    printf("\nYour array in ascending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Descending Bubble Sort (using the copied array)
    Descending_Bubble_Sort(arr_copy, n);
    printf("\nYour array in descending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr_copy[i]);
    }

    return 0;
}

// Optimized Ascending Bubble Sort function
void Ascending_Bubble_Sort(int arr[], int n)
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset swapped flag

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1]) // Swap if the current element is greater
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark swap as happened
            }
        }

        if (!swapped) // If no swaps happened, break early
            break;
    }
}

// Optimized Descending Bubble Sort function
void Descending_Bubble_Sort(int arr[], int n)
{
    int i, j, temp;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0; // Reset swapped flag

        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1]) // Swap if the current element is smaller
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // Mark swap as happened
            }
        }

        if (!swapped) // If no swaps happened, break early
            break;
    }
}
