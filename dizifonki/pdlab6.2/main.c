#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *isim, *soyisim;

    isim = (char*)malloc(sizeof(char) * 10);
    soyisim = (char*)malloc(sizeof(char) * 10);

    printf("Isim giriniz: ");
    fgets(isim, 10, stdin);

    printf("Soyisim giriniz: ");
    fgets(soyisim, 10, stdin);

    char hedef1[10], hedef2[10];

    strcpy(hedef1, isim);
    strcpy(hedef2, soyisim);


    printf("%s %s", hedef1, hedef2);

    free(isim);
    free(soyisim);

    return 0;
}
