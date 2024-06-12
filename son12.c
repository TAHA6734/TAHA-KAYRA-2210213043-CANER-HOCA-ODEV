#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci
{
    char isim[50];
    char bolum[50];
    int No;

}ogrenci;

void dosyaOlustur()
{
    FILE *fp = fopen("dosya.dat","wb");

    if(!fp)
    {
        perror("Dosya olusturulamadi \n ");
        return ;
    }
    fclose(fp);
    printf("dosya olusturuldu\n");
}

void KayitEkle()
{
    ogrenci ogrenci ;

    FILE *fp = fopen("dosya.dat","ab") ;

    if(!fp)
    {
            perror("Dosya acilmadi");
            return ;
    }

    printf("YENI KAYIT NUMARASI \n ");
    scanf("%d",&ogrenci.No);
    printf("ismi \n ");
    fgets(ogrenci.isim,100,stdin);
    ogrenci.isim[strcspn(ogrenci.isim,"\n")]= 0 ;
    printf("Bolum\n");
    fgets(ogrenci.bolum,100,stdin);
    ogrenci.bolum[strcspn(ogrenci.bolum,"\n")] = 0 ;

    fwrite(&ogrenci,sizeof(ogrenci),1,fp);
    fclose(fp);

    printf("KaYIT eklendi \n ");

}

void Kayitgosterme()
{
    FILE *fp = fopen("dosya.dat","rb");

    ogrenci ogrenci ;

    if(!fp)
    {
        perror("dosya acilmadi \n ");
        return;
    }

    while(fread(&ogrenci,sizeof(ogrenci),1,fp))
    {
        fprintf(fp,"%d %s %s \n ",ogrenci.No,ogrenci.isim,ogrenci.bolum);
    }
    fclose(fp);

}

void ismeGoreArama()
{
    char isim[100];

    ogrenci ogrenci ;

    FILE *fp = fopen("dosya.dat","rb");

    int bulundu = 0 ;

    if(!fp)
    {
        perror("HATA VAR");
        return;
    }

    printf("ISMI GIRIN \n ");
    fgets(isim,100,stdin);
    isim[strcspn(isim,"\n")] = 0 ;

    while(fread(&ogrenci,sizeof(ogrenci),1,fp))
    {
        if(strcpy(ogrenci.isim , isim)==0)
        {
                printf("OGRENCI BILGILERI %d %s %s \n ",ogrenci.No,ogrenci.isim,ogrenci.bolum);
            bulundu = 1 ;
        }

    }
    if(!bulundu)
    {
        printf("oyle bir ogrenci kaydi yok ");
    }
    fclose(fp);


}
void kayitGuncelle()
{
     FILE *fp = fopen("dosya.dat","rb+");

     ogrenci ogrenci ;

     int numara ;

     if(!fp)
     {
        perror("hata var");
        return ;
     }

     int bulundu = 0 ;

     printf("numarayi girin \n ") ;

     scanf("%d",numara);

     getchar();

    while (fread(&ogrenci , sizeof(ogrenci),1,fp))
    {
        if(ogrenci.No == numara)
        {
            printf("YENI biligiler isim \n ");
            fgets(ogrenci.isim,100,stdin) ;
            ogrenci.isim[strcspn(ogrenci.bolum,"\n")] = 0 ;
            printf("bolum:\n");
            fgets(ogrenci.bolum,100,stdin);
            ogrenci.bolum[strcspn(ogrenci.bolum,"\n")] = 0 ;
            printf("numara\n");
            scanf("%d",ogrenci.No);

            fseek(fp,-sizeof(ogrenci),SEEK_CUR);
            fwrite(&ogrenci,sizeof(ogrenci),1,fp);
            int bulundu = 1 ;
            break; ;
            
        }
    }

    if(!bulundu)
    {
        printf("oyle bir ogrenci yok \n ") ;
    }
    fclose(fp);
    
}
void KayitSil()
{
    ogrenci ogrenci ;

    FILE *fp  = fopen("dosya.dat","rb") ;
    FILE *tmp = fopen("txt.dat","wb");

    int numara ;
    int bulundu = 0 ;

    if(!fp || !tmp )
    {
        perror("hata var ") ;
        return ;
    }

    printf("ogrenci numarasini girin \n ") ;
    scanf("%d",numara);
    getchar();

    while (fread(&ogrenci,sizeof(ogrenci),1,fp))
    {
            if(ogrenci.No == numara)
            {
                    bulundu = 1 ;
            }
            else
            {
                fwrite(&ogrenci,sizeof(ogrenci),1,fp);
            }
    }
    fclose(fp);
    fclose(tmp);
    remove("dosya.dat");
    rename("txt.dat","dosya.dat");

}
void dosyaBoyut()
{
    FILE *fp = fopen("dosya.dat","rb") ;

    if(!fp)
    {
        perror("dosya acilmadi \n ");
        return ;
    }

    fseek(fp,0,SEEK_END);

    int boyut = ftell(fp);
    fclose(fp);
    return boyut ;
}

void NumarayaGoreSirala()
{
      int n = dosyaBoyut() / sizeof(ogrenci);


        if(n<2)
        {
            printf("Siralnacak veri yok \n ") ;
            return ;
        }

        ogrenci *ogrenci = malloc(n * sizeof(ogrenci)) ;

        if(!ogrenci)
        {
            perror("hata var ") ;
            return ;
        }

        FILE *fp = fopen("dosya.dat","rb") ;

        if(!fp)
        {
            perror("hata varr !! \n ");
            return ;
        }

            fread(ogrenci,sizeof(ogrenci),n,fp);
            fclose(fp);

            for(int i = 0 ; i < n - 1 ; i++)
            {
                for(int j = 0 ; j < n -1 ; j++)
                {
                    if(ogrenci[j].No > ogrenci[j+1].No)
                    {
                        ogrenci temp = ogrenci[j].No ;
                        ogrenci[j] = ogrenciler[j + 1];
                        ogrenci[j + 1] = temp;
                    }
                }
            }




}
 int  main()
 {
     int secim ; 

     while(1)
     {
         printf("\nMenü:\n");
        printf("1. Dosya oluştur\n");
        printf("2. Kayıt ekle\n");
        printf("3. Kayıtları göster\n");
        printf("4. İsme göre ara\n");
        printf("5. Kayıt güncelle\n");
        printf("6. Kayıt sil\n");
        printf("7. Numaraya göre sırala\n");
        printf("8. İki kaydın yerini değiştir\n");
        printf("9. Kayıtı belirli bir yere ekle\n");
        printf("-1. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d",&secim);
        getchar();

        if(secim == -1)
        {
            break; 
        }
        swich(secim)
        {

                case 1 : KayitEkle() ;
                break; 
                case 2 : kayitGuncelle();
                break; 
                case 3 : KayitSil();
                break; 
                case 4 : Kayitgosterme();
                break;
                case 5 : NumarayaGoreSirala();
                break;
                default:
    
        }











     }
 }