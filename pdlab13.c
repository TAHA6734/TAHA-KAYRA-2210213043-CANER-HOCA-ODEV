#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "dosya.dat" 


typedef struct ogrenci
{
    int no ;
    char isim[50];
    char bolum[50];
   
}ogrenci ;

void dosyaOlusturma()
{
    FILE *fp = fopen("dosya.dat","ab") ;

    if(fp==NULL)
    {
        printf("dosya yok \n ");
        return ;
    }

    else{
        printf("dosya olusturuldu \n ") ;
    }

    fclose(fp);
}


void KayitEkle()
{
        FILE *fp = fopen("dosya.dat","ab");
        ogrenci ogr ;

        if(fp == NULL)
        {
            printf("dosya yok \n ");
        }

        printf("ogrenci no :\n ");
        scanf("%d",&ogr.no);
        printf("ogrenci ismi :\n");
        scanf("%s",ogr.isim);
        printf("ogrenci bolum :\n ");
        scanf("%s",ogr.bolum);
       
        fwrite(&ogr,sizeof(ogrenci),1,fp) ;

        fclose(fp);

        printf("eklendi \n ") ;

}

void KayitSil()
{
    int no ;

        printf("hangi numarali ogrenciyi silecesiniz \n ");

        scanf("%d",&no);

        FILE *fp = fopen("dosya.dat","rb");

        FILE *tmp = fopen("tmp.txt","wb") ;

        if(fp == NULL || tmp == NULL)
        {
            printf("acilmadi \n ");
        }

        ogrenci ogr; 

        int found = 0 ;

        while(fread(&ogr,sizeof(ogrenci),1,fp))
        {
                if(&ogr.no == no)
                {
                    found = 1 ;
                }
                else{
                    fwrite(&ogr,sizeof(ogrenci),1,tmp) ;
                }
        }

        fclose(fp);
        fclose(tmp);

        remove("dosya.dat");
        rename("tmp.txt","dosya.dat");

        if (found) {
        printf("Kayit basariyla silindi.\n");
        } else {
        printf("Ogrenci bulunamadi.\n");
         }
}

void kayitara()
{
        int no ; 
        printf("hanfi ogrenciyi gormek istiyorsaniz onun numarsini giriniz \n ") ;
        scanf("%d",&no);

        FILE *fp = fopen("dosya.dat","rb") ;

        if(fp == NULL)
        {
            printf("dosya acilmadi \n ");
        }

        ogrenci ogr ; 

        int found  = 0 ;

        while (fread(&ogr,sizeof(ogrenci),1,fp))
        {
            if(&ogr.no == no)
            {
                printf("no : %d , ismi : %s , bolum : %s ",&ogr.no,ogr.isim,ogr.bolum) ;
                found = 1 ;
                break;
            }
            
        }
        fclose(fp);
    
}

void kayitGuncelle()
{
    int no ; 
    scanf("%d",&no);

    FILE *fp = fopen("dosya.dat","rb+") ;

    if(fp == NULL)
    {
        printf("olusturulmadi \n ");
        return ;
    }

    ogrenci ogr ; 

    int found = 0 ;


    while(fread(&ogr,sizeof(ogrenci),1,fp))
    {
        if(&ogr.no == no)
        {
            printf("ogrencinin yeni ismi :\n");
            scanf("%s",ogr.isim);
               printf("ogrencinin yeni bolumu :\n");
            scanf("%s",ogr.bolum);
               printf("ogrencinin yeni no :\n");
            scanf("%d",&ogr.no);


            fseek(fp,-sizeof(ogrenci),SEEK_CUR);
            fwrite(&ogr,sizeof(ogrenci),1,fp) ;

            found = 1 ;

            break ;
        }

    }

    fclose(fp);


}

void kayitYerdegistir()
{
    int ogr1,ogr2 ;

    scanf("%d%d",&ogr1,&ogr2);

    FILE *fp = fopen("dosya.dat","rb+");

      if (fp == NULL) {
        printf("Dosya acilamadi!\n");
        return;
    }

    ogrenci ogr1 , ogr2 ;

    int found1 = 0 ;
    int found2 = 0 ;

    long pos1 , pos2 ;

    


}

