#include<stdio.h>
#include<stdlib.h>

typedef struct ogrenci
{
    float vize ; 
    float final ; 
    int numara ;
    char isim[40] ;
    struct ogrenci *sonraki ;

}ogrenci ;

ogrenci *bas = NULL ; 



void kayitSil()
{
    if(bas == NULL)
    {
        printf("gecersiz\n");
    }
    printf("silinecek numarayi girin\n") ;
    int numara; 
    scanf("%d",&numara);

    ogrenci *tmp = bas ; 
    ogrenci *onceki = NULL ; 

    if(bas->numara == numara)
    {
        bas = bas -> sonraki ;
        free(tmp);
        printf("ogrenci silindi \n ") ;
        return ;
    }
    while (tmp != NULL && tmp->numara != NULL )
      {
        onceki = tmp ;
        tmp = tmp -> sonraki ;
     }
    
    if(tmp == NULL)
    {
        printf("Ogrenci bulunamadi");
    }
    else 
    {
        onceki -> sonraki = tmp -> sonraki ; 
        free(tmp) ;
    }

}

void ogrenciEkle(ogrenci *yeni , int konum )
{
    if(konum == 1 )
    {
            yeni -> sonraki = bas ; 
            bas = yeni ;

    }
    else if(konum == 2)
    {
            if(bas == NULL)
            {
                yeni  = bas ;
              yeni -> sonraki = NULL ;
            }

             else 
         {
            ogrenci *tmp = bas ; 

            while(tmp-> sonraki == NULL)
            {
                    tmp = tmp -> sonraki ;
            }
            yeni = tmp -> sonraki ; 
            yeni -> sonraki = NULL ;
         }

    }

    else if(konum == 3 )
    {

        int siraNO , bulunamadi = 1 ;

        printf("hangi ogrenciden sonra eklemek istersiniz \n ") ;
        scanf("%d",&siraNO) ;

        ogrenci *tmp = bas ; 

            while(tmp !=  NULL)
            {
                    if(tmp -> numara == siraNO)
                    {
                            yeni -> sonraki = tmp -> sonraki ; 
                            tmp -> sonraki = yeni ; 
                            bulunamadi = 0 ;
                            break; 

                    }
                    tmp = tmp -> sonraki ; 



            }
            if (bulunamadi) {
            printf("Öğrenci bulunamadı, sona ekleniyor.\n");
            ogrenciEkle(yeni, 2);
        }

    }else {
        printf("Geçersiz konum, sona ekleniyor.\n");
        ogrenciEkle(yeni, 2);
    
    
}


void YeniKayitEkleme()
{
    ogrenci *yeni = (struct ogrenci*)malloc(sizeof(struct ogrenci)) ;
        if(yeni == NULL)
        {
            printf("HAfiza yetersiz \n ") ; 
        }
        else
        {
                printf("ogrenci numarasini girin \n ") ; 
                scanf("%d",&yeni->numara) ;
                printf("ogrenci adi girin \n ") ;
                scanf("%s",yeni->isim) ;
                printf("vize Notu : \n ") ;
                scanf("%d",&yeni->vize) ;
                 printf("final Notu : \n ") ;
                scanf("%d",&yeni->final) ;
               printf("ogrenciyi nereye eklemek istersiniz ? (1.BASA 2.SONA 3.ORTAYA)\n ") ; 
               int konum ;
               scanf("%d",&konum) ;

               ogrenciEkle(yeni , konum ) ;
        }

}

void KayitListele()
{
    if(bas == NULL)
    {
        printf("hafiza bos yer yok \n ") ; 
        return ;
    }

        printf("NEYE GORE LISTELEME YAPILACAK 1-NUMARA 2-NOT \n ") ; 
        int kriter ; 
        scanf("%d",&kriter) ;
        if(kriter == 1 )
        {
                ogrenci *tmp = bas ; 
                while(tmp != NULL )
                {
                    printf("NUMARA : %d AD : %s VIZE : %.2f  FINAL : %.2f",&tmp->numara,tmp->isim,&tmp->vize,&tmp->final);
                    tmp = tmp -> sonraki ;

                }

        }
        else if(kriter==2)
        {
            printf("NOT TURU HANGISI OLSUN (1-vize 2-final )\n");
            int not_turu ; 
            scanf("%d",&not_turu) ;
            printf("ALT LIMIT \n");
            float altLimit ; 
            scanf("%f",&altLimit) ;
             printf("ust LIMIT \n");
            float ustLimit ; 
            scanf("%f",&ustLimit) ;
            ogrenci *tmp = bas ;
            while(tmp != NULL)
            {

                    float not_degeri = not_turu = 1 ? tmp -> vize : tmp -> final ; 
                    if(not_degeri >= altLimit && not_degeri <= ustLimit)
                    {
                            printf("NUMARA : %d AD : %s VIZE : %.2f  FINAL : %.2f",&tmp->numara,tmp->isim,&tmp->vize,&tmp->final);
                   

                    }
                     tmp = tmp -> sonraki ;
            }


        }
        else 
        {
            printf("gecersiz istek \n ") ;

        }





}

void KayitGuncelle()
{

    if(bas==NULL)
    {
        printf("gecersiz kayit\n ");
        return ;
    }
    printf("guncellenecek ogrenci numarasi \n ") ;
    int numara ; 
    scanf("%d",&numara) ;
     ogrenci *tmp = bas ; 

     while( tmp != NULL )
     {
        if(tmp -> numara == numara)
        {
                printf("YENI ogrenic adi :\n");
                scanf("%s",tmp->isim) ;
                printf("yeni ogrenci numarsai:\n");
                scanf("%d",&tmp ->numara);
                printf("vize notu\n");
                scanf("%d",&tmp -> vize);
                printf("final notu\n");
                scanf("%d",&tmp -> final);
        }
        tmp = tmp -> sonraki ;
     }
        printf("ogrenci bulunamadi\n") ;





}

void SinifOrtalamasi()
{
    if(bas == NULL)
    {
        printf("GECERSIz\n") ;
    }

   float toplam = 0 ;
   int sayi ; 

    ogrenci *tmp = bas ;
   
   while(tmp != NULL)
   {
        toplam = ((tmp->vize*0.4) + (tmp -> final *0.6)) ;
        sayi++; 
        tmp = tmp ->sonraki ; 
   }
   printf("sinif ortalamasi : %f " , toplam / sayi ) ;

}

void EnBasariliOgrenci()
{
    if(bas == NULL)
    {

        printf("gecersiz \n ") ;
    }

        ogrenci *enbasarili = bas ; 

        float enBasariliOrt = ((bas -> vize* 0.4) + (bas->final * 0.6)) ; 

        ogrenci *tmp = bas -> sonraki ; 

        while(tmp != NULL)
        {
            float ortalama = ((tmp -> vize* 0.4) + (tmp->final * 0.6)) ; 

            if(ortalama > enBasariliOrt)
            {
                    enBasariliOrt = ortalama ; 
                        enbasarili = tmp ;


            }
            tmp = tmp -> sonraki ; 

        }

        printf("en basarili ortalamaya sahip ogrenci : AD \n ",enbasarili->isim) ;

}

void hafizayisil()
{

    ogrenci *tmp = bas ; 

        while( tmp != NULL)
        {
                bas = tmp -> sonraki ; 
                bas = tmp ;
                free(tmp) ;

        }

}

int main()
{
        int secim ; 

       while(1)
       {
        printf("\nAna Menü\n");
        printf("1- Yeni Kayıt Ekleme\n");
        printf("2- Kayıt Listeleme\n");
        printf("3- Kayıt Güncelleme\n");
        printf("4- Sınıf Ortalaması Hesapla\n");
        printf("5- Ortalamaya Göre En Başarılı Öğrenci Bilgisini Göster\n");
        printf("0- Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d",&secim) ;

        switch(secim)
        {
                case 1 : YeniKayitEkleme();
                break; 

                case 2 : KayitListele();
                break;

                case 3 : KayitGuncelle();
                break; 

                case 4 : SinifOrtalamasi();
                break; 
                
                case 5 : EnBasariliOgrenci();
                break;

                case 0 : hafizayisil();
                return 0 ;

                default :
                printf("gecersiz ecim \n ") ;


        }



       }


    return 0 ;
}