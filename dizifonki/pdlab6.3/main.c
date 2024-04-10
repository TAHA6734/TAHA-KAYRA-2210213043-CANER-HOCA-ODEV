#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *isim;
    int isim_boyutu = 10; // Ad için başlangıç boyutu

    // Ad için bellek tahsisi
    isim = (char *)malloc(sizeof(char) * isim_boyutu);
    if (isim == NULL) {
        printf("Bellek tahsisi basarisiz!\n");
        return -1;
    }

    // Kullanıcıdan adı al
    printf("Adinizi girin: ");
    fgets(isim, isim_boyutu, stdin);

    // Satır sonu karakterini kaldır
    if (isim[strlen(isim) - 1] == '\n') {
        isim[strlen(isim) - 1] = '\0';
    }

    // Soyadı için bellek alanını genişlet
    isim_boyutu += 5; // Yeni boyutu hesapla
    isim = (char *)realloc(isim, sizeof(char) * isim_boyutu);
    if (isim == NULL)
        {
        printf("Bellek genisleme basarisiz!\n");
        return -1;
    }

    // Kullanıcıdan soyadını al
    printf("Soyadinizi girin: ");
    fgets(isim + strlen(isim), isim_boyutu - strlen(isim), stdin);

    // Yazdır
    printf("Ad ve Soyad: %s\n", isim);

    // Belleği serbest bırak
    free(isim);

    return 0;
}








