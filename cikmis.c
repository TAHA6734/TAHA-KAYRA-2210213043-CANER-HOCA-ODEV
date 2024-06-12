#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAKS_OGRENCILER 1000
#define MAKS_SATIR_UZUNLUGU 100

// Öğrenci yapısı
typedef struct {
    int numara;
    char ad[50];
    float not;
}Ogrenci;

// Lab puanları yapısı
typedef struct {
    int numara;
    float lab_puani;
}LabPuan;

void notGuncelle(float *not , float lab_puani)
{
    *not += lab_puani ;
}


int main() {
    FILE *ogrenci_dosyasi, *lab_dosyasi, *rasgele_erisim_dosyasi;
    Ogrenci ogrenciler[MAKS_OGRENCILER];
    LabPuan lab_puanlari[MAKS_OGRENCILER];
    int ogrenci_sayisi = 0, lab_puani_sayisi = 0;
    char satir[MAKS_SATIR_UZUNLUGU];

    // Öğrenci dosyasını oku ve bilgileri al
    ogrenci_dosyasi = fopen("ogrenciler.dat", "r");
    if (ogrenci_dosyasi == NULL) {
        perror("ogrenciler.dat dosyasini acarken hata olustu");
        exit(EXIT_FAILURE);
    }

    while (fgets(satir, sizeof(satir), ogrenci_dosyasi) != EOF ) {
        sscanf(satir, "%d %s", &ogrenciler[ogrenci_sayisi].numara, ogrenciler[ogrenci_sayisi].ad);
        ogrenci_sayisi++;
    }
    fclose(ogrenci_dosyasi);

    // Lab puanları dosyasını oku ve puanları al
    lab_dosyasi = fopen("lablar.txt", "r");
    if (lab_dosyasi == NULL) {
        perror("lablar.txt dosyasini acarken hata olustu");
        exit(EXIT_FAILURE);
    }

    while (fgets(satir, sizeof(satir), lab_dosyasi)) {
        sscanf(satir, "%d %f", &lab_puanlari[lab_puani_sayisi].numara, &lab_puanlari[lab_puani_sayisi].lab_puani);
        lab_puani_sayisi++;
    }
    fclose(lab_dosyasi);

    rasgele_erisim_dosyasi = fopen("rastgele.erisim.dat","r+b");

    for(int i = 0 ; i <lab_puani_sayisi; i++)
    {
        fseek(rasgele_erisim_dosyasi,lab_puanlari[i].numara*sizeof(Ogrenci),SEEK_SET);

        fread(&ogrenciler[lab_puanlari[i].numara],sizeof(Ogrenci),1,rasgele_erisim_dosyasi);

        notGuncelle(&ogrenciler[lab_puanlari[i].numara].not,lab_puanlari[i].lab_puani);

        fseek(rasgele_erisim_dosyasi,lab_puanlari[i].numara,SEEK_SET);

        fwrite(&ogrenciler[lab_puanlari[i].lab_puani]*sizeof(Ogrenci),1,rasgele_erisim_dosyasi);


    }


fclose(rasgele_erisim_dosyasi);


}

