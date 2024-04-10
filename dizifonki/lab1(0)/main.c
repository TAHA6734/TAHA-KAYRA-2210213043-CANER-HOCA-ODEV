#include <stdio.h>
#include <stdlib.h>

int hesapla(int x[100]);



int main()
{
    int note[100];


    hesapla(note);







    return 0;
}
int hesapla(int x[100])
{
    int sum = 0 ;
    int notsayisi, gecme = 0, kalma=0;
    int ortalma;

            while(1)
            {
                 printf("kac tane not gireceksiniz...\n");
                 scanf("%d",&notsayisi);
                 if(notsayisi>100)
                 {
                     printf("en fazla 100 not grebilirsiniz...\n");
                 }
                 else
                 {
                     break;
                 }
            }

         for (int i = 1; i <= notsayisi; i++) {
        int notpuani;
        printf("Lütfen %d. not puanını girin: ", i);
        scanf("%d", &notpuani);

        if (notpuani >= 0 && notpuani <= 100) {
            sum += notpuani;
            if (notpuani >= 50) {
                gecme++;
            } else {
                kalma++;
            }
            x[i] = notpuani;
        } else {
            printf("Gecersiz not puanı! Lutfen 0 ile 100 arasında bir not giriniz.\n");
            i--;
        }
    }

    ortalma = sum / notsayisi;
    printf("Kalan sayısı: %d\n", kalma);
    printf("Gecen sayısı: %d\n", gecme);
    printf("Sınıfın not ortalaması: %d\n", ortalma);
}







