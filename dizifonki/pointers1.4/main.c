#include <stdio.h>
#include <stdlib.h>

int  DiziUzunluguBulma(char *DiziAdresi)
{
    int lenght = 0 ;
    for(int i = 0 ; DiziAdresi[i] != '\0' ; i++)
    {
      lenght++ ;
    }

    return lenght ;

}



int main()
{


    char isim [] = "Taha Kayra Tekin " ;


    DiziUzunluguBulma(isim) ;
    printf("diziinin uzunlugu : %d \n ",DiziUzunluguBulma(isim)) ;






    return 0;
}
