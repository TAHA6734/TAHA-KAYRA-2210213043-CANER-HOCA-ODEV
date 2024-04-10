#include <stdio.h>
#include <ctype.h>


void removeNonAlphabets(char *str);

int main() {
    char input[100];

    // Get user input
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove non-alphabetic characters
    removeNonAlphabets(input);

    // Display the result
    printf("Result: %s\n", input);

    return 0;
}
void removeNonAlphabets(char *str) {
    int i, j;

    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';
}
