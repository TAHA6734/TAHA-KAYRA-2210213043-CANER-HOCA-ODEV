#include<stdio.h>
#include<stdlib.h>


typedef struct ogrenci
{
    int NO ;
    char isim[40] ;
    char soyisim[40] ;
}ogrenci ;

void DosyaOlustur()
{
    FILE *fp = fopen("TAHA KAYRA ","wb") ;

    if(fp == NULL)
    {
        printf("Dosya olsuturulamadi \n ") ;
         exit(1);
    }

    else{

        fclose(fp) ;
        printf("dosya olusturuldu \n ") ;
    }


}

void KayitEkleme()
{
    ogrenci ogrenci ;

    FILE *fp = fopen("TAHA KAYRA","ab") ;

    if(fp == NULL)
    {
        printf("dosya acilamadi \n ") ;
        return ;
    }

        printf("OGRENCI NO :\n");
        scanf("%d",&ogrenci.NO);
        printf("OGRENCI ADI : \n");
        scanf("%s",ogrenci.isim);
        printf("OGRENCI SOYISMI : \n ");
        scanf("%s",ogrenci.soyisim) ;

        fwrite(&ogrenci , sizeof(ogrenci),1,fp) ;
        fclose(fp); 
        printf("KAYIT EKLENDI \n ");

}

void ogrenciNoArama()
{
    ogrenci ogrenci ;
    int ogrenciNo ; 
    int bulundu = 0 ;

    FILE *fp = fopen("TAHA KAYRA","rb") ;

    if (fp == NULL) {
        printf("Dosya açılamadı.\n");
        return;
    }

    printf("ARAMAK ISTEDIGIniz numarayi girin \n ") ;
    scanf("%d",&ogrenciNo);

    while(fread(&ogrenci,sizeof(ogrenci),1,fp))
    {
        if(ogrenci.NO == ogrenciNo)
        {
            printf("Öğrenci No: %d\n", ogrenci.NO);
            printf("İsim: %s\n", ogrenci.isim);
            printf("Bölüm: %s\n", ogrenci.soyisim);
            bulundu = 1;
            break;
        }
    }


}

int main()
{


    return 0 ;
}