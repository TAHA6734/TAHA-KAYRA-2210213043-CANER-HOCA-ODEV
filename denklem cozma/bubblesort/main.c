#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MAX 100
void bubbleSort ( int dizi[] , int size )
{
    for( int i = 0 ; i < size ; i++)
    {
        for(int j = 1 ; j < size - i ; j++ )
        {
            if(dizi[j-1]>dizi[j])
            {
                int temp = dizi[j] ;
                dizi[j] = dizi[j-1];
                dizi[j-1] = temp ;
            }

        }
    }
}


int main()
{
    setlocale(LC_ALL,"Turkish") ;



    int TamSayiDizisi[MAX] , boyut ;
    printf("kac elemanli bir dizi olusturmak istiyorsun \n ") ;
    scanf("%d",&boyut) ;




    for( int i = 0 ; i< boyut ; i++)
    {
        printf("%d.eleman:",i+1);
        scanf("%d",&TamSayiDizisi[i]);
    }





    bubbleSort(TamSayiDizisi , boyut ) ;


    for( int i = 0 ; i< boyut ; i++)
    {
        printf("%d",TamSayiDizisi[i]) ;
    }



    return 0;

}
