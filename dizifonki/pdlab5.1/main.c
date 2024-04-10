#include <stdio.h>
#include <stdlib.h>

void sort(char *a, int size) {
    char *b = a + size - 1; // b, dizinin son elemanını işaret etsin
    char temp;

    for(int i = 0; i < size / 2; i++) { // Diziyi tersten sıralamak için yarıya kadar git
        temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}

int main() {
    char isim[99];

    printf("İsim giriniz: ");
    gets(isim);

    int length = 0;

    for(int i = 0; isim[i] != '\0'; i++) {
        length++;
    }

    sort(isim, length);

    printf("Ters sıralı isim: %s\n", isim);

    return 0;
}
