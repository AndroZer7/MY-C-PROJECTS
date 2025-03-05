#include <stdio.h>

void remove_char(char *str, char ch);

int main()
{
    printf("This program removes the given character from the input string.\n");
    char str[100], ch;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to remove: ");
    scanf(" %c", &ch); // Leading space to ignore newline

    remove_char(str, ch);
    printf("String after removing '%c' is '%s'\n", ch, str);
    return 0;
}

void remove_char(char *str, char ch)
{
    int i, j;
    for (i = 0, j = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ch)
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}
