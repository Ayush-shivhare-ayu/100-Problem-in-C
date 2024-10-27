#include <stdio.h>

int main()
{
    char s[] = "ayushshivhare";
    int x = 0; // Initialize count of vowels
    int i;

    // Loop through the string from index 0 to the length of the string - 1
    for (i = 0; s[i] != '\0'; i++) // Use '\0' to determine the end of the string
    {
        // Check if the character is a vowel
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            x++; // Increment vowel count
        }
    }

    printf("%d times are vowels\n", x); // Corrected wording
    
    return 0;
}
