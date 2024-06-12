#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct hasta
{
    int hastaNO  ;
    char isim[40] ;
    char hastalik[40];
    int yas ;

}hasta;

void hastaEkle()
{
    FILE *fp = fopen("HASTA","ab") ;

    hasta hasta ;

    if(fp==NULL)
    {
        printf("dosya acilmadi \n ") ;
        return ;
    }
    
    printf("HASTA NO : \n ");
    scanf("%d",&hasta.hastaNO) ;
    printf("ISMI :\n") ;
    scanf("%s",hasta.isim);
    printf("HASTA yas : \n ");
    scanf("%d",&hasta.yas) ;
    printf("HASTALIK : \n ");
    scanf("%s",hasta.hastalik) ;

    fwrite(&hasta,sizeof(hasta),1,fp) ;
    fclose(fp);
 
    printf("Hasta basariyle eklendi \n ") ;
}


void hastaAra()
{
    FILE *fp = fopen("HASTA","rb") ;

    int hastaNO ; 

    hasta hasta ;

    int bulundu = 0 ;

    if(fp == NULL)
    {
        printf("DOSYA ACILMADI \n");
    }


        printf("ARAMAK ISTEDIGINIZ HASTA NO GIRIN \n ") ;

        scanf("%d",&hastaNO) ;


        while(fread(&hasta,sizeof(hasta),1,fp))
        {
                if(hasta.hastaNO == hastaNO)
                {
                        printf("HASTA NO : %d \n ",&hasta.hastaNO);
                         printf("HASTA AD : %s \n ",hasta.isim);
                          printf("HASTA HASTALIK : %s \n ",hasta.hastalik);
                           printf("HASTA Yas : %d  ",&hasta.yas);

                           bulundu = 1 ;
                           break;
                }

        }
        if(!bulundu)
        {
            printf("HASTA BULUNAMADI \n ") ;

        }

        fclose(fp) ;



}
void hastaSil()
{
         FILE *fp = fopen("HASTA","rb") ;
         FILE *ftmp = fopen("temp.data","wb") ;
     
         int hastaNO ; 

        hasta hasta ;
       
        if(fp == NULL)
        {
        
        printf("DOSYA ACILMADI \n");

        }
        int bulundu = 0 ;

        printf("ARAMAK ISTEDIGINIZ HASTA NO GIRIN \n ") ;

        scanf("%d",&hastaNO) ;

        while(fread(&hasta,sizeof(hasta),1,fp))
        {
                if(hasta.hastaNO != hastaNO)
                {
                    fwrite(&hasta,sizeof(hasta),1,ftmp) ;
                }
                else
                {
                    bulundu = 1 ; 
                }
        }

                fclose(fp) ;
                fclose(ftmp) ;

                remove("HASTA") ;
                rename("tmp.data","HASTA") ;

                if (bulundu) {
            printf("Hasta başarıyla silindi.\n");
              }        
             else {
                    printf("Hasta bulunamadı.\n");
             }



}


 void hastaGuncelle()
 {
        FILE *fp = fopen("Hasta","r+b") ;

        int hastaNO ; 

        hasta hasta ; 

        if(fp == NULL)
        {

            printf("Dosya acilamadi \n ") ;
        }

        int bulundu = 0 ;

        printf("guncellenecek hasta no : ") ;
        scanf("%d",&hastaNO) ;

        while(fread(&hasta,sizeof(hasta),1,fp))
        {
            if(hasta.hastaNO == hastaNO)
            {
                printf("YENI NO : \n ") ;
                scanf("%d",&hasta.hastaNO);
                  printf("YENI ad : \n ") ;
                scanf("%s",hasta.isim);
                  printf("YENI hastalik : \n ") ;
                scanf("%s",hasta.hastalik);
                  printf("YENI yas  : \n ") ;
                scanf("%d",&hasta.yas);

                fseek(fp,-size(hasta),SEEK_CUR) ;
                fwrite(&hasta,sizeof(hasta),1,fp) ;
                printf("hasta gincellendi \n") ;         
                
                 bulundu = 1 ;
                 break; 
          }
        }
        if (!bulundu) {
        printf("Hasta bulunamadı.\n");
    }

    fclose(fp);
 }

void HastaListesi()
{
       hasta hasta;
     FILE *fp = fopen("HASTA", "rb");
    
    if (fp == NULL) {
        printf("Dosya açılamadı.\n");
        return;
    }

    printf("*****HASTA LISTESI*****\n");
    while (fread(&hasta,sizeof(hasta),1,fp))
    {
            printf("HASTA NO : %d\n",&hasta.hastaNO);
            printf("HASTA ADI : %s\n",hasta.isim);
            printf("HASTALIK :%s \n" , hasta.hastalik);
            printf("HASTA YAS : %d\n",&hasta.yas);

    }
    fclose(fp);

}

void menu()
{
        int secim ; 

       do{ printf("\n--- Menü ---\n");
        printf("1. Yeni Hasta Ekle\n");
        printf("2. Hasta Ara\n");
        printf("3. Hasta Sil\n");
        printf("4. Hasta Güncelle\n");
        printf("5. Hastaları Listele\n");
        printf("6. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        switch (secim)
        {
            case 1 : hastaAra() ;
            break; 
             case 2 : hastaEkle() ;
            break;
             case 3 : hastaGuncelle() ;
            break;
             case 4: hastaSil() ;
            break;
             case 5: HastaListesi() ;
            break;
            default:
            printf("gecersiz secim \n ") ;

        }
       }while (secim != 6 ) ;
      

}






int main()
{
        menu() ;
    return 0 ;
}
