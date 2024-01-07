#include <stdio.h>
#include <ctype.h>

void countCharacters(char *text, int *vowels, int *consonants, int *digits, int *spaces) {
    while (*text) {
        if (isalpha(*text)) {
            // Harf ise
            char lowercase = tolower(*text); // Harfi küçük harfe çevir
            if (lowercase == 'a' || lowercase == 'e' || lowercase == 'i' || lowercase == 'o' || lowercase == 'u') {
                // Sesli harf ise
                (*vowels)++;
            } else {
                // Sessiz harf ise
                (*consonants)++;
            }
        } else if (isdigit(*text)) {
            // Rakam ise
            (*digits)++;
        } else if (*text == ' ' || *text == '\t' || *text == '\n' || *text == '\r') {
            // Boşluk karakteri ise
            (*spaces)++;
        }

        text++;
    }
}

int main() {
    char input[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Bir metin giriniz: ");
    fgets(input, sizeof(input), stdin);

    countCharacters(input, &vowels, &consonants, &digits, &spaces);

    printf("Sesli harf sayisi: %d\n", vowels);
    printf("Sessiz harf sayisi: %d\n", consonants);
    printf("Rakam sayisi: %d\n", digits);
    printf("Bosluk sayisi: %d\n", spaces);

    return 0;
}

