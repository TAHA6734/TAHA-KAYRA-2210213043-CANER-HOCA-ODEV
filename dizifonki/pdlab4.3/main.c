#include <stdio.h>
#include <stdlib.h>

basamakToplami(int sayi)
{
    int ld ;
    while( sayi > 0 )
    {
        ld = sayi % 10 ;

        if(sayi != 0 )
        {
            return ld +  basamakToplami(sayi / 10 ) ;
        }
        else
        {
            return ld ;
        }
    }
}



int main()
{



int sayi ;

printf("Bir sayi giriniz : ") ;

scanf("%d",&sayi) ;


printf(" sayinin basamaklari toplami : %d",basamakToplami(sayi)) ;





    return 0;
}
