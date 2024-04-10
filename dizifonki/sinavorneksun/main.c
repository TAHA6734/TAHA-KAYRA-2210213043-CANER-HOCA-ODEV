#include <stdio.h>
#include <stdlib.h>

void AddArray(int a[], int *size, int sayi);
void Ascelate(int b[], int size);

int main() {
    int Array[] = {1, 2, 3, 4};
    int uzunluk = sizeof(Array) / sizeof(Array[0]);

    AddArray(Array, &uzunluk, 5);
    Ascelate(Array, uzunluk);

    return 0;
}

void AddArray(int a[], int *size, int sayi) {
    printf("Hangi sayiyi diziye ekleyeceksiniz: ");
    scanf("%d", &sayi);

    a[*size] = sayi;
    (*size)++;
}

void Ascelate(int b[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (b[i] > b[j]) {
                int temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }

    printf("Sıralı dizi: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
}

