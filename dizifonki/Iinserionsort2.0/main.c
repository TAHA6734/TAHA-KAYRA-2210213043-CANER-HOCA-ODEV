#include <stdio.h>
#include <stdlib.h>





  void insertionSort(int dizi[] , int boyut)
{
    int eleman ;




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

    insertionSort(tamsayiListesi , size ) ;



   for(int i = 0 ; i < size ; i++)
   {
       printf("%d\n",tamsayiListesi[i]);
   }











    return 0;
}
