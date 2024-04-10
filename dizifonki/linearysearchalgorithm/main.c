
#include <stdio.h>
#include <stdlib.h>


int linearSearchAlgorith ( int dizi[] , int arananSayi , int boyut )
{
    for( int i = 0 ; i < boyut ; i++)
    {
        if( dizi [i] == arananSayi)
        {
            return i ;
        }

    }
    return -1 ;
}



int main()
{


int sayilar [] = {1,2,3,4,5,6,7,8,9} ;

int aranan = 99 ;

int size = sizeof(sayilar) / sizeof(int) ;

int aramaSonuc = linearSearchAlgorith(sayilar,aranan,size) ;

    if ( aramaSonuc >= 0)
        {
            printf("Aradiginiz sayinin indeksi %d  \n " , aramaSonuc + 1  ) ;
        }

 else
 {
     printf("aradiginiz sayi yok \n ") ;
 }




    return 0;
}
