#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char **cumle;

    // Ana dizi için bellek tahsisi
    cumle = (char **)malloc(sizeof(char *) * 10);
    if (cumle == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return -1;
    }

    printf("Bir Metin giriniz:\n");

    // Her bir öğe için bellek tahsisi
    for (int i = 0; i < 10; i++) {
        cumle[i] = (char *)malloc(sizeof(char) * 20);
        if (cumle[i] == NULL) {
            printf("Bellek tahsisi basarisiz!\n");
            return -1;
        }
        scanf(" %[^\n]", cumle[i]); // Birden fazla kelime almak için %[^\n] kullan
    }

    // Ters çevirme işlemi
    for (int i = 0; i < 10 / 2; i++) {
        char *temp = cumle[i];
        cumle[i] = cumle[9 - i];
        cumle[9 - i] = temp;
    }

    // Ters çevrilen metni yazdır
    printf("Ters cevrilmis metin:\n");
    for (int i = 0; i < 10; i++) {
        printf("%s\n", cumle[i]);
    }

    // Belleği serbest bırak
    for (int i = 0; i < 10; i++) {
        free(cumle[i]);
    }
    free(cumle);

    return 0;
}

