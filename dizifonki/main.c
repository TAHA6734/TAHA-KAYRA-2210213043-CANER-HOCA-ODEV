#include <stdio.h>

// Fonksiyon prototipi (bildirimi)
void diziyeElemanEkle(int dizi[], int eleman, int uzunluk);

int main() {
    // Bir dizi tanımlama
    int myDizi[5] = {1, 2, 3, 4, 5};

    // Fonksiyonu çağırma
    diziyeElemanEkle(myDizi, 6, 5);

    // Diziyi ekrana yazdırma
    for (int i = 0; i < 5; i++) {
        printf("%d ", myDizi[i]);
    }

    return 0;
}

// Diziyi değiştiren fonksiyon
void diziyeElemanEkle(int dizi[], int eleman, int uzunluk) {
    // Diziye eleman eklemek için örnek bir işlem
    if (uzunluk > 0) {
        dizi[uzunluk - 1] = eleman;
    }
}






