#include <stdio.h>
#include <stdlib.h>

float toplama(float, float);
float cikarma(float, float);
float bolme(float, float);
float carpma(float, float);

int main()
{
    float secim, s1, s2;
    while (1)
    {
        printf("Hangi islemi yapmak istiyorsunuz?\n");
        printf("1. Toplama\n");
        printf("2. Cikarma\n");
        printf("3. Bolme\n");
        printf("4. Carpma\n");
        printf("5. Cikis\n");

        printf("Sececeginiz islemin sayisini girin (Ornek: Toplama = 1)\n");
        scanf("%f", &secim);

        printf("Lutfen iki sayi giriniz\n");
        printf("1. sayi: ");
        scanf("%f", &s1);
        printf("2. sayi: ");
        scanf("%f", &s2);

        if (secim == 1)
        {
            printf("%f + %f = %f\n", s1, s2, toplama(s1, s2));
        }
        else if (secim == 2)
        {
            printf("%f - %f = %f\n", s1, s2, cikarma(s1, s2));
        }
        else if (secim == 3)
        {
            if (s2 != 0)
            {
                printf("%f / %f = %f\n", s1, s2, bolme(s1, s2));
            }
            else
            {
                printf("Hata: Sifira bolme hatasi!\n");
            }
        }
        else if (secim == 4)
        {
            printf("%f * %f = %f\n", s1, s2, carpma(s1, s2));
        }
        else if (secim == 5)
        {
            exit(0);
        }
        else
        {
            printf("Yanlis giris\n");
        }
    }

    return 0;
}

float toplama(float a, float b)
{
    return a + b;
}

float cikarma(float a, float b)
{
    return a - b;
}

float bolme(float a, float b)
{
    return (b != 0) ? (float)a / b : 0;
}

float carpma(float a, float b)
{
    return a * b;
}



