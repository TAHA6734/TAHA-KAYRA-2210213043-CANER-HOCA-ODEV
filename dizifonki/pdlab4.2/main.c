#include <stdio.h>

// Fonksiyon prototipi
int findMax(int array[], int size);

int main() {
    int array[100], size, i;

    printf("Dizinin boyutunu girin: ");
    scanf("%d", &size);

    printf("Dizinin elemanlarini girin:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    // En büyük elemanı bul ve ekrana yazdır
    printf("En buyuk eleman: %d\n", findMax(array, size));

    return 0;
}

// Rekürsif olarak en büyük elemanı bulan fonksiyon
int findMax(int array[], int size) {
    // Dizinin sadece bir elemanı varsa, bu elemanı geri döndür
    if (size == 1) {
        return array[0];
    }

    // Dizinin geri kalan kısmında en büyük elemanı bul
    int max = findMax(array, size - 1);

    // Bulunan en büyük eleman ile dizinin son elemanını karşılaştır
    if (array[size - 1] > max) {
        return array[size - 1];
    } else {
        return max;
    }

}

