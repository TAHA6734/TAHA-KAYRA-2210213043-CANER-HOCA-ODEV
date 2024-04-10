
#include <stdio.h>

int fac(int *n) {
    if (*n == 0) {
        return 1;
    } else {
        return (*n) * fac(n - 1);
    }
}

int main() {
    int sayi;

    printf("Bir sayı giriniz: ");
    scanf("%d", &sayi);

    int *ptr;

    ptr = &sayi;

    int sonuc = fac(ptr);

    printf("Faktöriyel: %d\n", sonuc);

    return 0;
}
