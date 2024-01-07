#include <stdio.h>
#include <math.h>

// Faktöriyel hesaplayan fonksiyon
double factorial(int n) {
    if (n == 0 || n == 1) {
        return 1.0;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n;
    double x, sum = 0.0;

    // Kullanıcıdan x değerini ve serinin terim sayısını al
    printf("x değerini giriniz: ");
    scanf("%lf", &x);

    printf("Serinin terim sayısını giriniz: ");
    scanf("%d", &n);

    // Seriyi hesapla
    for (int i = 0; i < n; ++i) {
        // Her terimi hesapla ve toplama ekle
        double term = pow(x, i) / factorial(i);
        sum += term;
    }

    // Sonucu ekrana yazdır
    printf("Toplam: %lf\n", sum);

    return 0;
}
