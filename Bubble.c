// This programme uses bubble sort method to sort the elements in an array.

#include <stdio.h>

// Ascending Bubble sort function
void Ascending_Bubble_Sort(int arr[], int n);
// Descending Bubble sort function
void Descending_Bubble_Sort(int arr[], int n);

int main()
{
    printf("This programme uses bubble sort method to sort the elements in an array.\n");
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Your array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    // Ascending Bubble sort
    Ascending_Bubble_Sort(arr, n);
    printf("\nYour array in ascending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    // Descending Bubble sort
    Descending_Bubble_Sort(arr, n);
    printf("\nYour array in descending order is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// Ascending Bubble sort function
void Ascending_Bubble_Sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
// Descending Bubble sort function
void Descending_Bubble_Sort(int arr[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
