#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    int yas ; 
    int HastaNo ;
    char isim[40];
    char hastalik[40];
}hasta ;

void HastaEkle()
{
    FILE *fp = fopen("hastalar.dat","wb") ;
    hasta hasta ;
    if(!fp)
    {
        perror("dosya acilmadi \n ") ;
        return ;
    }
    printf("hasta bilgilerini girin \n ") ;
    printf("ismi girin \n ");
    scanf("%s",hasta.isim);
    printf("yas \n ");
    scanf("%d",hasta.yas);
    printf("hasta no \n ");
    scanf("%d",hasta.HastaNo);
    printf("hastalik \n ") ;
    scanf("%s",hasta.hastalik);

    fwrite(&hasta,sizeof(hasta),1,fp) ;
    fclose(fp);
    printf("Hasta eklendi \n ");

}

void HastaAra()
{
    FILE *fp = fopen("hastalar.dat","r") ;
    hasta hasta ; 
    int numara ; 
    int bulundu = 0 ;
    if(!fp)
    {
        printf("hata var \n ");
        return ;
    }
    printf("HAstA numarasini girin \n ") ;
    scanf("%d",&numara) ;

    while(fread(&hasta,sizeof(hasta),1,fp))
    {
        if(hasta.HastaNo == numara)
        {
             int bulundu = 1 ;
             printf("HASTA BILGILERI %d %d %s %s ",hasta.HastaNo,hasta.yas,hasta.hastalik,hasta.HastaNo) ;
             break; 
        }

    }
    fclose(fp);
    printf("HASTA BULUNDU \n ");

}
void HastaSil()
{
    FILE *fp = fopen("dosya.dat","rb") ;
    FILE *tmp = fopen("tmp.dat","wb");
    int numara ; 
    int bulundu = 0 ; 
    
        if(!fp || !tmp)
        {
            perror("HATA VAR \n ");
            fclose(fp);
            fclose(tmp);
            return ;
        }    
        
        hasta hasta ;

        while(fread(&hasta,sizeof(hasta),1,fp))
        {
                if(hasta.HastaNo == numara)
                {
                    bulundu = 1 ;
                }
                else
                {
                    fwrite(&hasta,sizeof(hasta),1,tmp);
                }
        }
        fclose(fp);
        fclose(tmp);

        remove("dosya.dat");
        rename("txt.dat","dosya.dat") ;

        if(bulundu)
        {
            printf("ogrenci silindi \n ");
        }
        else{
            printf("ogrenci bulunamadi \n ");
        }
    
}

void HastaDuzenle()
{
    FILE *fp = fopen("dosya.dat","rb");

    if(!fp)
    {
        perror("HATA VAR \n ") ;
        return ;
    }
    int numara ;
    int bulundu = 0 ;

    hasta hasta ; 

    while(fread(&hasta,sizeof(hasta),1,fp))
    {
        if(hasta.HastaNo == numara)
        {
            bulundu = 1 ;
            printf("YENI BILGILERI EKLE \n ") ;
            printf("ismi \n ") ;
            scanf("%s",hasta.isim);
            printf("yas\n ");
            scanf("%d",hasta.HastaNo);
            printf("hastalik \n ");
            scanf("%s",hasta.hastalik);

            fseek(fp,-sizeof(hasta),SEEK_CUR) ;
            fwrite(&hasta,sizeof(hasta),1,fp);
            break;
        }  

    }

    fclose(fp);
    if(bulundu)
    {
        printf("HASTA BILIGILERI GUNCELLENDID \n ");

    }
    else
    {
        printf("HASTA BULUNAMADI \n ") ;
    }
}
void HastalariListele()
{
    FILE *fp = fopen("hasta.dat","rb");

    hasta hasta ;

    if(!fp)
    {
        perror("HATA VAR \n "); 
        return ;
    }

    while(fread(&hasta ,sizeof(hasta),1,fp))
    {
        fprintf(fp,"HASTA BILGILERI  : %s %d %d %s \n ",hasta.isim,hasta.HastaNo,hasta.yas,hasta.hastalik) ;
    }

    fclose(fp);
}
int main()
{
    int secim ; 
    int hastaNo  ;
    while(1)
    {
        printf("MENUYE HOSGELDINIZ CIKIS ICIN -1 GERI KALAN ISLEMLER ICIN ILGILI NUMARAYI GIRIN \n ") 
        printf("\nMENU\n "); 
        printf("HASTA EKLE\n ");
        printf("HASTA SIL\n "); 
        printf("HASTA DUZENLE \n ");
        printf("HASTALARI LISTELE\n ");

        scanf("%d",&secim) ;
        if(secim == -1)
        {
            break; 
        } 

        switch (secim)
        {
                case 1 : HastaEkle(); 
                break;
                case 2 : HastaSil();
                break;
                case 3 : HastaDuzenle();
                break;
                case 4 : HastalariListele();
                break;
                default:printf("GECERSIZ SECIM \n ");
        }
    }
    return 0 ;
}