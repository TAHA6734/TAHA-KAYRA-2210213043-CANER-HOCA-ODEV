#include <stdio.h>

int main() {
    int number[100];

    printf("Ogrenci numarasini giriniz: ");
    scanf("%d", &number[0]);

    int temp = number[0];
    int ld, sum = 0;

    while (temp > 0) {
        ld = temp % 10;
        sum = sum + ld;
        temp = temp / 10;
    }

    sum = 18 ;

    int fake[sum];
    int bolunenler[sum], bolunemeyenler[sum];
    int bolunenIndex = 0, bolunemeyenIndex = 0;

    for (int i = 0; i < sum; i++) {
        printf("Bir sayi giriniz: ");
        scanf("%d", &fake[i]);

        if (fake[i] % 3 == 0) {
            bolunenler[bolunenIndex++] = fake[i];
        } else {
            bolunemeyenler[bolunemeyenIndex++] = fake[i];
        }
    }

    printf("3'e bolunebilen sayilar:\n");
    for (int j = 0; j < bolunenIndex; j++) {
        printf("%d ", bolunenler[j]);
    }

    printf("\nBolunemeyen sayilar:\n");
    for (int k = 0; k < bolunemeyenIndex; k++) {
        printf("%d ", bolunemeyenler[k]);
    }

    return 0;
}





























