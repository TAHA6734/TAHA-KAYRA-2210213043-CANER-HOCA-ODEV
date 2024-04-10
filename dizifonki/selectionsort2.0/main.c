#include <stdio.h>
#include <stdlib.h>


void selectionSort(int dizi [] , int boyut )
{
    int enkucukIndeks ;

    for(int i = 0 ; i < size ; i++)
    {
        enkucukIndeks = i ;

        for(int j = i  ; j  < size ; j++ )
        {
            if(dizi[j]  < dizi[enkucukIndeks])
                enkucukIndeks = j ;
        }


    }
      int temp  = dizi[i] ;

      dizi[i] = dizi [enkucukIndeks]  ;

      dizi[enkucukIndeks] = temp ;


}


int main()
{


    int size ;

    printf("kac elemanli bir dizi gireceksiniz \n ") ;

    scanf("%d " ,&boyut ) ;

    int *tamsayiListesi =  (int *)malloc(sizeof(int) * boyut ) ;

    for(int i = 0 ; i < size ; i++)
    {
        printf("%d.eleman : " , i+1 ) ;
         scanf("%d",&tamsayiListesi[i]) ;
    }

    selectionSort(tamsayiListesi , size ) ;



    return 0;
}
