#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *sayilar  ;

   int eleman ;

   printf("Kac eleman gireceksiniz \n " ) ;

   scanf("%d" , &eleman) ;

   sayilar = (int *)calloc(sizeof(int) , eleman ) ;

   printf("sayi degerlerini giriniz \n ") ;

   for(int i = 0 ; i < eleman ; i++)
      {
          scanf("%d" , sayilar+i) ;
      }

    int max = *sayilar ;

     for(int j = 0 ; j < eleman ; j++)
        {
            if(*(sayilar + j ) > max )
            {
                max = *(sayilar + j ) ;

            }

        }

        printf("%d\n " , max ) ;
        free(sayilar);


    return 0;
}
