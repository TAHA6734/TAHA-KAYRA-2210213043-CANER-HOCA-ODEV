#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Bir metin giriniz:\n");

    char **cumle;
    char *kelime;

    cumle = malloc(sizeof(char *) * 10);
    for (int i = 0; i < 10; i++) {
        cumle[i] = malloc(sizeof(char) * 10);
        scanf("%s", cumle[i]);
    }

    printf("Aramak istediğiniz kelimeyi giriniz:\n");
    kelime = malloc(sizeof(char) * 100);
    scanf("%s", kelime);

    for (int j = 0; j < 10; j++) {
        if (strcmp(cumle[j], kelime) == 0) {
            printf("%s kelimesi %d. indiste bulunuyor.\n", kelime, j);
        }
    }

    // Belleği serbest bırak
    for (int i = 0; i < 10; i++) {
        free(cumle[i]);
    }
    free(cumle);
    free(kelime);

    return 0;
}


