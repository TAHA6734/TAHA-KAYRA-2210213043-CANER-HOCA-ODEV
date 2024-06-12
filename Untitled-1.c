#include <stdio.h>
#include <stdlib.h>

struct ogrenci
{
    int vize , final ; 
    char ad[40] ;
    int no ; 
    struct ogrenci *sonraki ;
    
};

typedef struct ogrenci dugum ; 

dugum *head = NULL ;

void ListeOlusturma()
{

   int n , k ; 

   dugum  *yenidugum , *temp ; 

   printf("kac kislik bir liste olusturacaksiniz ? \n ") ; 

   scanf("%d",&n) ; 

   for(k = 0 ; k < n ; k++)
   {
              yenidugum = (dugum*)malloc(sizeof(dugum)) ; 

                printf("ogreci NO \n");
              scanf("%d",&yenidugum -> no);
                printf("ogreci ad \n");
              scanf("%s",yenidugum -> ad );
                printf("ogreci vize \n");
              scanf("%d",&yenidugum -> vize);
                printf("ogreci final \n");
              scanf("%d",&yenidugum -> final );

              yenidugum -> sonraki = NULL ; 

              if(k==0)
              {
                     head -> yenidugum ; 
              }
              else 
              {
                    temp -> sonraki = yenidugum ; 
              }
              temp = yenidugum ;

 

   }



}

void ogrenciListeleme()
{

   double donemNotu = 0 ;

    dugum *p ; 

    p = head ; 

    while(p != NULL)
    {
            printf("\n*************\n") ; 
            printf("ogernci no : %d \n" , p -> no ) ;
            printf("ogernci vize : %d \n" , p -> vize ) ;
            printf("ogernci final : %d \n" , p -> final ) ;
            printf("ogernci adi : %s \n" , p -> ad ) ;

            donemNotu = (p -> vize * 0.4) + (p -> final * 0.6) ;

            printf("Ogrencinin DOnem notu %d \n " , donemNotu ) ; 

            printf("\n************\n" ) ; 

            p = p -> sonraki ; 

    }




}

void ogrenciEkleme()
{
  int kayitNo ; 
  dugum *p , *q ; 
  yenidugum = (dugum*)malloc(sizeof(dugum)) ;

  printf("ogrenci No : %d \n ") ; scanf("%d", &yenidugum -> no ) ; 
  printf("ogrenci vize : %d \n ") ; scanf("%d", &yenidugum -> vize ) ; 
  printf("ogrenci final : %d \n ") ; scanf("%d", &yenidugum -> final ) ; 
  printf("ogrenci adi : %s \n ") ; scanf("%s", yenidugum -> ad ) ; 

  printf("nereye kayit ediceksiniz \n ") ; 
  printf("listenin sonuna eklemek ici 0'a basiniz \n ") ; 

  scanf("%d",&kayitNo) ; 

  p = head ; 

  if(p-> no == kayitNo) 
  {
          yenidugum -> sonraki = p ; 
          head = yenidugum ; 

  }

  else 
  {

         while(p->sonraki != NULL ) 
         {
            q = p ; 
            p = p -> sonraki ; 

            if(p->sonraki == kayitNo) 
            {
              break ;
            }

         }
         if(p -> sonraki == kayitNo)
         {
               q-> sonraki = yenidugum ; 
               yenidugum -> sonraki = p ; 
         }
         else if (p-sonraki == NULL)
         {
              p-> sonraki = yenidugum ; 
              yenidugum -> sonraki = NULL ; 

         }

  }

}

void ogrenciSil()
{
    int kayitNo ; 
    dugum *q , *p ;
    printf("silmek istediginiz ogrenciyi giriniz \n ") ; 
    scanf("%d ",&kayitNo) ; 

    p = head ; 

    if(p->no == kayitNo) ; 
    {
        head = p -> sonraki ; 
        free(p) ;
    }
   else 
   {
        while(p->sonraki != NULL)
        {
                 if(p->no == kayitNo)
                 {
                  break ;
                 }
                 else 
                 {
                    q = p ;
                    p = p -> sonraki ; 

                 }
                 if(p-> no == kayitNo )
                 {
                    q ->sonraki = p -> sonraki ; 
                    free(p) ;

                 }
                 else if(p->sonraki == NULL)
                 {
                    printf("Silinecek ogrenci yok \n ") ;
                 }

        }

   }
    
}

double DonemNotOrtalamasi(int vize , int final )
{
      return ((vize*0.4) + (final *0.6)) ;
}


void EnbasariliOgrenci()
{
      double BasariNotu = 0 ;

      dugum *p , *enbasarili ; 
      p = head ; 
      *enbasarili = head ; 

      while(p->sonraki != NULL )
      {

        p = p -> sonraki ; 

        if(DonemNotOrtalamasi(p->vize , p -> final )> DonemNotOrtalamasi(enbasarili -> vize , enbasarili -> final )) 
        {

          enbasarili = p ;
        }

      }

      printf("En basarili ogrenci :\n") ;
      printf("NO:%d adi:%s ve donem Notu %d ", enbasarili-> no , enbasarili->ad DonemNotOrtalamasi(enbasarili->vize , enbasarili->final)) ;



}