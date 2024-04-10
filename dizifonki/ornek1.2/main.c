#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertionSort(char dizi[], int size) {
    int oncesi;
    char gecici;

    for (int i = 1; i < size; i++) {
        gecici = dizi[i];
        oncesi = i - 1;

        while (oncesi >= 0 && dizi[oncesi] > gecici) {
            dizi[oncesi + 1] = dizi[oncesi];
            oncesi--;
        }
        dizi[oncesi + 1] = gecici;
    }
}

int main() {
    char *isim = (char*)malloc(sizeof(char) * 100);

    printf("Isminizi girin: ");

    fgets(isim, 100, stdin);

    insertionSort(isim, strlen(isim));

    printf("Siralanmis hali: %s", isim);

    free(isim);

    return 0;
}
