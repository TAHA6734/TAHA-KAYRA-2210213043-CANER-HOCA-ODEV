#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100


  void selectionSort ( int dizi[] , int size )
  {

      int enKucukIndeks;

      for( int i = 0 ; i < size  ;  i++ )
        {


        enKucukIndeks = i ;
        for( int j = i ; j < size ; j++)
        {
            if( dizi[j] < dizi[enKucukIndeks])
            {
                enKucukIndeks = j ;
            }
        }

        int temp = dizi[i] ;

        dizi[i] = dizi[enKucukIndeks] ;

        dizi[enKucukIndeks] = temp ;


        }

  }









int main()
{


      int TamSayiDizisi[MAX] , boyut ;
    printf("kac elemanli bir dizi olusturmak istiyorsun \n ") ;
    scanf("%d",&boyut) ;




    for( int i = 0 ; i< boyut ; i++)
    {
        printf("%d.eleman:",i+1);
        scanf("%d",&TamSayiDizisi[i]);
    }





    selectionSort(TamSayiDizisi , boyut ) ;


    for( int i = 0 ; i< boyut ; i++)
    {
        printf("%d",TamSayiDizisi[i]) ;
    }















    return 0;

}
