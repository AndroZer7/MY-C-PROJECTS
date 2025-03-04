#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to check if a string is a palindrome
int isPalindrome(char str[]);

int main()
{
    printf("This program checks if a string is a palindrome or not.\n");
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets()
    str[strcspn(str, "\n")] = 0;

    // Check if the string is a palindrome
    if (isPalindrome(str))
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is NOT a palindrome.\n");
    }

    return 0;
}
// Function to check if a string is a palindrome
int isPalindrome(char str[])
{
    int left = 0, right = strlen(str) - 1;

    while (left < right)
    {
        // Ignore non-alphanumeric characters
        while (left < right && !isalnum(str[left]))
        {
            left++;
        }
        while (left < right && !isalnum(str[right]))
        {
            right--;
        }

        // Compare lowercase characters
        if (tolower(str[left]) != tolower(str[right]))
        {
            return 0; // Not a palindrome
        }

        left++;
        right--;
    }
    return 1; // It is a palindrome
}