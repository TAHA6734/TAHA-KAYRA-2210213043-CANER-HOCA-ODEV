#include <stdio.h>
#include <stdlib.h>

void bubblesort( char dizi[] , int size )
{
    for( int i = 0 ; i < size ; i++)
    {
        for(int j =1 ; j < size - i ; j++ )
        {
            if( dizi[j-1] != dizi[j])
            {
                char temp  = dizi[j] ;
                 dizi[j] = dizi[j-1] ;
                  dizi[j-1] = temp ;
                   printf("Sıralanmış isim: %s\n", dizi);



            }
        }

    }

}

int main()
{

  int boyut ;
  printf("kac harfli bir isim gireceksin \n ") ;

  scanf("%d",&boyut);

   char *isim = calloc( boyut+1 , sizeof(char)) ;

     printf("İsim giriniz: ");
   scanf("%s",isim);

   bubblesort( isim , boyut ) ;

  printf("Sıralanmış isim: %s\n", isim);

    free(isim);

    return 0;
}
