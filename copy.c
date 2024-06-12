#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100
#define MAX_RECORDS 100

typedef struct {
    int ogrenciNo;
    int vize;
    char isim[MAX_NAME_LEN];
} Ogrenci;

Ogrenci ogrenciler[MAX_RECORDS];
int kayitSayisi;

void kayitOku() {
    FILE *file = fopen("ogrenciler.txt", "r");
    if (file == NULL) {
        printf("Dosya acilamadi.\n");
        exit(1);
        
    }


    kayitSayisi = 0 ;

    while (fscanf(file, "%d %d %s", &ogrenciler[kayitSayisi].ogrenciNo, &ogrenciler[kayitSayisi].vize, ogrenciler[kayitSayisi].isim) != EOF) {
        kayitSayisi++;
    }

    fclose(file);
}

void kayitYaz() {
    FILE *file = fopen("ogrenciler.txt", "w");
    if (file == NULL) {
        printf("Dosya acilamadi.\n");
        exit(1);
    }

    for (int i = 0; i < kayitSayisi; i++) {
        fprintf(file, "%d %d %s\n", ogrenciler[i].ogrenciNo, ogrenciler[i].vize, ogrenciler[i].isim);
    }

    fclose(file);
}

void kayitDegistir(int kayit1, int kayit2) {
    Ogrenci temp = ogrenciler[kayit1];
    ogrenciler[kayit1] = ogrenciler[kayit2];
    ogrenciler[kayit2] = temp;
}

int main() {
    int kayit1, kayit2;

    kayitOku();

    printf("Degistirilecek iki kaydin numarasini girin (0'dan %d'ye kadar):\n", kayitSayisi - 1);
    printf("Ilk kayit numarasi: ");
    scanf("%d", &kayit1);
    printf("Ikinci kayit numarasi: ");
    scanf("%d", &kayit2);

    if (kayit1 < 0 || kayit1 >= kayitSayisi || kayit2 < 0 || kayit2 >= kayitSayisi) {
        printf("Gecersiz kayit numarasi.\n");
        return 1;
    }

    kayitDegistir(kayit1, kayit2);

    kayitYaz();

    printf("Kayitlar basariyla degistirildi.\n");

    return 0;
}