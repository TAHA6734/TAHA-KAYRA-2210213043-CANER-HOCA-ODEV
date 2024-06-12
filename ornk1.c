#include <stdlib.h> 
#include <stdio.h> 

struct musteri 
{
    int hesapNo ; 
    char isim[40] ;
    char soyisim[40];
    double bakiye ;
    
};

int secimGir(void) ; 
void textdosya(FILE *) ;
void kayitGuncelle(FILE *) ;
void yeniKayit(FILE *) ;
void KAyitsil(FILE *) ;
void listele(FILE *);



int main(void)
{
    FILE *dosya ; 
    int  secim ; 
    
    if((dosya = fopen("C:\\Users\\ttaha\\OneDrive\\Desktop\\METIN C\\metin.txt","w"))==NULL)
    {
        printf("dosya acilmadi \n ") ;
    }

    else 
    {
        while((secim = secimGir()) != 6)
        {
            switch(secim)
            {
                case 1 : textdosya(dosya) ; 
                break;
                case 2 : kayitGuncelle(dosya) ;
                break; 
                case 3: yeniKayit( dosya) ;
                break; ;
                case 4 : KAyitsil(dosya) ;
                break ;
                case 5 : listele(dosya);
                break; ;

            }
        }
        fclose(dosya) ;

    }

    return 0 ;
}

int secimGir()
{
    int menusecim ;
   printf("\nSecim yapin \n");
    printf("1.musteri.dot dosyasinin icerigini \n");
     printf("2.hesap guncelle \n");
      printf("3.yeni hesap ekle \n");
       printf("4.hesap sil \n");
        printf("5.musteri.dat dosyasinin icerigi \n");
         printf("6.cikis \n");
         scanf("%d",&menusecim) ;
         return menusecim ;

}

void textdosya(FILE *dosya)
{
    FILE *yazPtr;

    struct musteri hesapbilgi = {0, "", "", 0.0};  

    if((yazPtr = fopen("metin.doc","w")) == NULL)
    {
        printf("Dosya açılamadı.\n"); 
        return;
    }
    else 
    {
        rewind(dosya);
        fprintf(yazPtr, "%s %s %s %s\n", "Hesap NO", "Soyad", "Ad", "Bakiye");
        while(fread(&hesapbilgi, sizeof(struct musteri), 1, dosya))
        {
            if(hesapbilgi.hesapNo != 0)
            {
                fprintf(yazPtr, "%d %s %s %.2f\n", hesapbilgi.hesapNo, hesapbilgi.isim, hesapbilgi.soyisim, hesapbilgi.bakiye);
            }
        }
        fclose(yazPtr);
    }
}


void kayitGuncelle(FILE *dosya)
{
    int hesapId; 
    double islemMiktari; 
    struct musteri hesapBilgisi;

    printf("Güncellenecek hesap no girin: ");
    scanf("%d", &hesapId); 

    fseek(dosya, (hesapId - 1) * sizeof(struct musteri), SEEK_SET); 

    // Dosyadan ilgili hesap kaydını okuma
    if (fread(&hesapBilgisi, sizeof(struct musteri), 1, dosya) == 1)
    {
        // Hesap bilgilerini gösterme
        printf("%d %s %s %.2f\n", hesapBilgisi.hesapNo, hesapBilgisi.isim, hesapBilgisi.soyisim, hesapBilgisi.bakiye);

        // Kullanıcıdan işlem miktarını alma
        printf("Hesaptan çekilecek veya eklenecek miktarı giriniz: ");
        scanf("%lf", &islemMiktari); 
        hesapBilgisi.bakiye += islemMiktari;

        // Güncellenmiş hesap bilgilerini gösterme
        printf("%d %s %s %.2f\n", hesapBilgisi.hesapNo, hesapBilgisi.isim, hesapBilgisi.soyisim, hesapBilgisi.bakiye);

        // Dosya işaretçisini geri konumlandırma ve güncellenmiş bilgileri dosyaya yazma
        fseek(dosya, sizeof(struct musteri), SEEK_CUR);
        fwrite(&hesapBilgisi, sizeof(struct musteri), 1, dosya);
    }
    else
    {
        // Hesap bulunamazsa mesaj gösterme
        printf("%d nolu hesap için bilgi bulunamadı.\n", hesapId);
    }
}

void kayitsil(FILE *dosya)
{
    struct musteri hesapBilgisi , boshesap = {0,"","",0.0} ;
    int hesapId ;
    printf("silinecek hesap Id girin "); 
    scanf("%d",&hesapId) ;
    fseek(dosya , (hesapId-1)*sizeof(struct musteri),SEEK_SET );
    fread(&hesapBilgisi,sizeof(struct musteri),1,dosya) ;
    if(hesapId==0)
    {
        printf("silinecek hesap yok \n ") ;
    }
    else 
    {
        fseek(dosya , (hesapId-1)*sizeof(struct musteri),SEEK_SET);
        fwrite(&boshesap,sizeof(struct musteri),1,dosya);
    }


}
void yeniKayit(FILE *dosya)
{
    int hesapno ;
    struct musteri hesapbilgisi = {0,"","",0.0} ;
    printf("yeni hesap icin hesap No girin \n ") ;

    scanf("%d",&hesapno) ;
    fseek(dosya,(hesapno -1)*sizeof(struct musteri ),SEEK_SET) ;
    fread(&hesapbilgisi , sizeof(struct musteri),1,dosya); 
    if(hesapbilgisi.hesapNo != 0)
    {
        printf("zaten boyle bir hesap var \n ") ;
    }

    else
    {
        printf("ad , soyad ve bakiye giriniz \n ") ;
        scanf("%s %s %d ",hesapbilgisi.isim,hesapbilgisi.soyisim,&hesapbilgisi.bakiye) ;
        hesapbilgisi.hesapNo = hesapno ; 
        fseek(dosya,(hesapno -1)*sizeof(struct musteri),SEEK_SET) ;
        fwrite(&hesapbilgisi,sizeof(struct musteri ),1,dosya) ;


    }

}
void listele(FILE *dosya)
{
    struct musteri hesapBilgisi = { 0 , "" , "" ,0.0} ;
    printf("%s %s %d %f ","isim","soyisim","hesap no ","bakiye ") ; 

    while (!feof(dosya))
    {
        fread(&hesapBilgisi,sizeof(struct musteri), 1 , dosya) ;
        if(hesapBilgisi.hesapNo != 0)
        {
                printf("%s %s %d %f ",hesapBilgisi.isim,hesapBilgisi.soyisim,&hesapBilgisi.hesapNo,&hesapBilgisi.bakiye) ;

        }
        getchar() ;

    }
}