#include <stdio.h>
#include <stdlib.h> 

struct ogrenci 
{
    int ogrenciNo ;
    char isim[40] ;
    char bolum[40] ;
};


void kayitEkleme(FILE *) ;

int main()
{
        FILE *dosya ; 

        

    return 0 ; 
}

void kayitEkleme(FILE *dosya)
{
        struct ogrenci bilgileri = {0,"",""} ;

        int hesapNo ;

        printf("eklemek istediginiz numaru girin\n ") ; 

        scanf("%d ",&hesapNo) ;

        fseek(dosya,(hesapNo -1)*sizeof(struct ogrenci),SEEK_SET) ; 

        fread(&bilgileri,sizeof(struct ogrenci),1,dosya) ;

        if(bilgileri.ogrenciNo != 0)
        {
            printf("zaten boyle bir ogrenci var ") ;
        }
        else 
        {
            printf("yeni ogrenci bilgilerini girinniz \n ") ;
            scanf("%d %s %s ",&bilgileri.ogrenciNo,bilgileri.isim,bilgileri.bolum) ;
            bilgileri.ogrenciNo = hesapNo ; 
            fseek(dosya,(hesapNo - 1)*sizeof(struct ogrenci),SEEK_SET);
            fwrite(&bilgileri,sizeof(struct ogrenci),1,dosya) ;
        }







}