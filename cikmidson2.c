#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 100

typedef struct {
    int ogrenciNo;
    int labPuani;
} LabKaydi;

typedef struct {
    int ogrenciNo;
    char isim[MAX_NAME_LEN];
    int notu;
} Ogrenci;

FILE *gradesFile;
FILE *labFile;

void dosyalariAc() {
    gradesFile = fopen("grades.dat", "r+b");
    if (gradesFile == NULL) {
        perror("Grades dosyasi acilamadi");
        exit(1);
    }

    labFile = fopen("lab.txt", "r");
    if (labFile == NULL) {
        perror("Lab dosyasi acilamadi");
        fclose(gradesFile);
        exit(1);
    }
}

void dosyalariKapat() {
    fclose(gradesFile);
    fclose(labFile);
}

void labPuanlariniGuncelle() {
    LabKaydi labKaydi;

    while (fscanf(labFile, "%d %d", &labKaydi.ogrenciNo, &labKaydi.labPuani) != EOF) {
        rewind(gradesFile);
        Ogrenci ogrenci;
        while (fread(&ogrenci, sizeof(Ogrenci), 1, gradesFile) == 1) {
            if (ogrenci.ogrenciNo == labKaydi.ogrenciNo) {
                ogrenci.notu += labKaydi.labPuani;
                fseek(gradesFile, -sizeof(Ogrenci), SEEK_CUR);
                fwrite(&ogrenci, sizeof(Ogrenci), 1, gradesFile);
                break;
            }
        }
    }
}

int main() {
    dosyalariAc();
    labPuanlariniGuncelle();
    dosyalariKapat();
    printf("Lab puanlari basariyla guncellendi.\n");
    return 0;
}
