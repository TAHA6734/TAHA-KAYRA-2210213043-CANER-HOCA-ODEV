#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> // isalpha fonksiyonunu kullanmak için

int main() {
    char *metin;
    int *harf_sayilari; // Her harfin sayısını saklamak için dinamik olarak tahsis edilen bellek

    // Bellek tahsisi için kullanıcıdan metni alın
    printf("Lutfen metni girin:\n");

    int metin_uzunlugu = 100; // Metnin başlangıç uzunluğu
    metin = (char *)malloc(sizeof(char) * metin_uzunlugu);
    fgets(metin, metin_uzunlugu, stdin); // Metni oku

    // Harf sayılarını saklamak için bellek tahsis et
    harf_sayilari = (int *)calloc(26, sizeof(int)); // 26 harf için bellek tahsisi

    // Metindeki her karakteri kontrol et ve harf ise sayacı artır
    for (int i = 0; metin[i] != '\0'; i++) {
        if (isalpha(metin[i])) { // isalpha fonksiyonu harf kontrolü yapar
            char harf = tolower(metin[i]); // Küçük harfe dönüştür
            harf_sayilari[harf - 'a']++; // Harfin sayısını artır
        }
    }

    // Her harfin sayısını ekrana yazdır
    for (int i = 0; i < 26; i++) {
        if (harf_sayilari[i] > 0) {
            printf("%c: %d\n", 'a' + i, harf_sayilari[i]);
        }
    }

    // Belleği serbest bırak
    free(metin);
    free(harf_sayilari);

    return 0;
}
