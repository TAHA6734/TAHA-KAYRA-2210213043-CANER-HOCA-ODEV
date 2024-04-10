#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Elemanları büyükten küçüğe doğru sırala
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int sayilar[99];

    printf("Kaç tane sayı gireceksiniz: ");
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d. eleman: ", i + 1);
        scanf("%d", &sayilar[i]);
    }

    // Elemanları büyükten küçüğe doğru sırala
    bubbleSort(sayilar, num);

    // Sıralanmış diziyi ekrana yazdır
    printf("Sıralı dizi: ");
    for (int i = 0; i < num; i++) {
        printf("%d ", sayilar[i]);
    }
    printf("\n");

    return 0;
}

