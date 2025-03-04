// This programme will take two strings as the input from user and append the second string to the first string With the help of dynamic memory allocation.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("This program appends the second string to the first string.\n");
    char *str1, *str2;
    int len1, len2;

    printf("Enter the length of the first string: ");
    scanf("%d", &len1);
    getchar(); // Clear input buffer

    // Allocate extra space for null terminator
    str1 = malloc((len1 + 1) * sizeof(char));
    if (str1 == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the first string: ");
    fgets(str1, len1 + 1, stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove trailing newline

    printf("Enter the length of the second string: ");
    scanf("%d", &len2);
    getchar(); // Clear input buffer

    // Allocate extra space for null terminator
    str2 = malloc((len2 + 1) * sizeof(char));
    if (str2 == NULL)
    {
        free(str1);
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the second string: ");
    fgets(str2, len2 + 1, stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove trailing newline

    // Use actual string lengths
    int actual_len1 = strlen(str1);
    int actual_len2 = strlen(str2);
    int new_len = actual_len1 + actual_len2;

    // Reallocate with space for concatenated string and null terminator
    char *temp = realloc(str1, (new_len + 1) * sizeof(char));
    if (temp == NULL)
    {
        free(str1);
        free(str2);
        printf("Memory allocation failed.\n");
        return 1;
    }
    str1 = temp;

    // Append str2 to str1
    strcat(str1, str2);

    printf("The appended string is: %s\n", str1);

    free(str1);
    free(str2);

    return 0;
}