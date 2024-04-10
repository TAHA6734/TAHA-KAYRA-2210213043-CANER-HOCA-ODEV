#include <stdio.h>
#include <stdlib.h>
#define N 7

long power(int m, int n);
void prnHeading(void);
void prnTableOfPowers(int x);

int main()
{
    prnHeading(); // void anahtar kelimesi kaldırıldı
    prnTableOfPowers(N); // N sabiti doğrudan fonksiyon çağrısında kullanıldı
    return 0;
}

void prnHeading()
{
    printf("\n:::::: A TABLE OF POWERS ::::::\n\n");
}

void prnTableOfPowers(int x)
{
    for(int i = 1; i <= x; ++i)
    {
        for(int j = 1; j <= x; ++j)
        {
            if(j == 1)
            {
                printf("%ld", power(i, j));
            }
            else
            {
                printf("%9ld", power(i, j));
            }
        }
        putchar('\n');
    }
}

long power(int m, int n)
{
    long product = 1; // product değişkeni long türünde tanımlandı
    for(int i = 1; i <= n; ++i)
    {
        product = product * m;
    }
    return product; // return ifadesi döngünün dışına alındı
}
