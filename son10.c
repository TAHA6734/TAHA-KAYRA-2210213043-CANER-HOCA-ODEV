#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct ogrenciBilgileri
{
    int vize ;
    int final ; 
    char isim[40];
    int numara ;

    struct ogrenciBilgileri *next 
}ogrenci ;

void printMenu() {
    printf("1- Yeni Kayıt Ekleme\n");
    printf("2- Kayıt Silme\n");
    printf("3- Kayıt Listeleme\n");
    printf("4- Kayıt Güncelleme\n");
    printf("5- Sınıf Ortalaması Hesapla\n");
    printf("6- Ortalamaya Göre En Başarılı Öğrenci Bilgisini Göster\n");
    printf("7- Numaraya Göre Sıralama\n");
    printf("8- Vize ve Final Ortalamasına Göre Sıralama\n");
    printf("9- Vize ve Final Notu Limitlerine Göre Listeleme\n");
    printf("0- Çıkış\n");
}


void ogrenciEkle(ogrenci **head)
{
        ogrenci *yeni = (ogrenci*)malloc(sizeof(ogrenci)) ;

            printf("ogrenci ismi:\n");
            scanf("%s",yeni->isim) ;
            printf("ogrenci numarasi : \n");
            scanf("%d",&yeni->numara);
             printf("ogrenci vizesii : \n");
            scanf("%d",&yeni->vize);
             printf("ogrenci finali : \n");
            scanf("%d",&yeni->final);

            yeni -> next = *head ;
            *head = yeni;

}

void ogrenciSil(ogrenci **head)
{
    ogrenci *tmp = *head ;
    ogrenci *prev = NULL ;
    int numara ;
        printf("hangi numarayi silmek istersiniz \n ");
        scanf("%d",&numara);

          

        if(tmp != NULL && tmp -> numara == numara)
         {
            *head = tmp ->next;
            free(tmp);
            return ;
        }
        while(tmp != NULL && tmp -> numara != numara)
        {
            prev = tmp ; 
            tmp -> next ;

        }
          if(tmp == NULL)
                 {
                  printf("ogrenci yok \n");
                 return;
                 }

                 prev -> next = tmp -> next ;
                 free(tmp) ;
                  printf("Öğrenci silindi!\n");

}
void listele(ogrenci *head)
{
    ogrenci *tmp = head ;

        while(tmp != NULL)
        {
            printf("%s %d %d %d \n",tmp->isim,&tmp->numara,&tmp->vize,&tmp->final);
            tmp = tmp ->next ;
        }

}

void updateogrenci(ogrenci *head)
{
    int numara; 
    printf("hangi numarali ogrenciyi guncelleyeceksiniz \n ") ;
    scanf("%d",&numara);

    ogrenci *tmp = head ; 

    while(tmp != NULL)
    {
        if(tmp->numara == numara)
        {
            printf("yeni ogrenci bilgileri \n ");
            printf("isim : ");
            scanf("%s",tmp->isim);
            printf("numara :\n ");
            scanf("%d",&tmp ->numara);
                printf("vize :\n ");
            scanf("%d",&tmp ->vize);
                printf("final :\n ");
            scanf("%d",&tmp ->final);
            return;
        }
        tmp = tmp -> next ;
    }
}

float ortalamaHesaplama(ogrenci *head )
{
    int toplamVize = 0 ;
    int toplamFinal = 0 ;
    int ogrencisayisi = 0;

    ogrenci *tmp = head ;

    while(tmp != NULL)
    {
        toplamFinal += tmp -> final ;
        toplamVize += tmp -> vize ;
        ogrencisayisi++;
        tmp = tmp ->next ;
    }

    float ortalama = (toplamFinal * 0.6) + (toplamVize *0.4);

    printf("%f",ortalama);

    return ortalama ;
}

void EnbasariliOgrenci(ogrenci *head )
{
   
    ogrenci *enbasarili = head;

    ogrenci *tmp ; 
    tmp = head -> next ;

    float enbasariliOrt = (enbasarili -> vize * 0.4) + (enbasarili -> final * 0.6) ;

    while(tmp != NULL)
    {
        float ortalama = (tmp -> final * 0.6) + (tmp -> vize * 0.4) ;
        
        if(ortalama > enbasariliOrt)
        {
            enbasariliOrt = ortalama ;
            enbasarili = tmp ;
        }
        tmp = tmp ->next ;
    }

    printf("en basrili ogrenci %s %d %f",enbasarili->isim ,enbasarili->numara,enbasariliOrt);

}
void KonumagoreOgrenciEkleme(ogrenci **head , int konum)
{
    ogrenci *yeni = (ogrenci*)malloc(sizeof(ogrenci));

              printf("yeni ogrenci bilgileri \n ");
            printf("isim : ");
            scanf("%s",yeni->isim);
            printf("numara :\n ");
            scanf("%d",&yeni ->numara);
                printf("vize :\n ");
            scanf("%d",&yeni ->vize);
                printf("final :\n ");
            scanf("%d",&yeni ->final);

            yeni -> next = NULL ; 

            if(konum == 0)
            {
                yeni -> next = head ;
                head = yeni ;
            }

            else{
                ogrenci *current = *head ;

                for(int i =0 ; i < konum - 1 ; i++)
                {
                    current = current -> next ;
                }
                if(current == NULL)
                {
                    printf("oyle bir yer yok \n ");
                    free(current);
                }
               else{
                        yeni -> next = current -> next ;
                        current ->next = yeni ;
               }
            }
              printf("Öğrenci eklendi!\n");
    
}
void IkidugumuYerDegistir(ogrenci **head , int numara1 ,int numara2)
{
    if(numara1 == numara1)
    {
        return;
    }

    ogrenci *prevX = NULL , *currentX = *head ;

    while (currentX -> numara != numara1)
    {
            prevX = currentX ;
            currentX = currentX -> next ;
    }

    ogrenci *prevY = NULL , *currentY = *head ;

    while(currentY -> numara != numara2)
    {
        prevY = currentY ;
        currentY = currentY -> next ;
    }

    if(currentX == NULL || currentX == NULL)
    {
        return ;
    }    

    if(prevX != NULL)
    {
        prevX -> next = currentY ;
    }
    else
    {
        *head = currentY ;
    }

    if(prevY != NULL)
    {
        prevY -> next = currentX ;
    }
    else{
        *head = currentX ;
    }

    ogrenci *tmp = currentX -> next ;
    currentX -> next = currentY ->next ;
    currentY -> next = tmp ;

}