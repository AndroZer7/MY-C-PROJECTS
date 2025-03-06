// This programme will flip pasting lowercase characters to uppercase and vice versa.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to flip the case of the characters
void flip(char *str, int length);

int main()
{
    printf("This programme will flip pasting lowercase characters to uppercase and vice versa.\n");
    char str[100];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);
    int length = strlen(str);

    flip(str, length);
    printf("tHE new string is: %s", str);
}

// Function to flip the case of the characters
void flip(char *str, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        if (isupper(str[i]))
        {
            str[i] = tolower(str[i]);
        }
        else if (islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }
    }
}