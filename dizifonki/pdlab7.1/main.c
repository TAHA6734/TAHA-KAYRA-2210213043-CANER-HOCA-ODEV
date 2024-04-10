#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *kelime1, *kelime2;
    int uzunluk1, uzunluk2;


    kelime1 = (char *)malloc(sizeof(char) * 100);
    kelime2 = (char *)malloc(sizeof(char) * 100);

    if (kelime1 == NULL || kelime2 == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return -1;
    }


    printf("Iki kelimeyi giriniz: ");
    scanf("%s %s", kelime1, kelime2);


    uzunluk1 = strlen(kelime1);
    uzunluk2 = strlen(kelime2);


    if (strcmp(kelime1, kelime2) == 0) {
        printf("Girilen kelimeler aynidir.\n");
    } else {
        printf("Girilen kelimeler farklidir.\n");
        if (uzunluk1 > uzunluk2) {
            printf("%s kelimesi %s kelimesinden daha uzundur.\n", kelime1, kelime2);
        } else {
            printf("%s kelimesi %s kelimesinden daha uzundur.\n", kelime2, kelime1);
        }
    }


    free(kelime1);
    free(kelime2);

    return 0;
}

