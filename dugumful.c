#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ogrenci 
{
        int numara ;
        char isim[40];
        int vize ;
        int final ;
        struct  ogrenci *next ;

}ogrenci;

ogrenci *head = NULL ;

void yeniKayitEkle()
{
        ogrenci *yeni = (ogrenci*)malloc(sizeof(ogrenci));

        printf("Ogrenci ismi :\n") ;
        scanf("%s",yeni->isim);
        printf("ogrenci numarasi :  \n ");
        scanf("%d",&yeni->numara);
        printf("ogrenci vize : \n ");
        scanf("%d",&yeni->vize);
        printf("ogrenci final : \n ");
        scanf("%d",&yeni->final);

        yeni -> next = head ; 
        head = yeni ; 
        printf("kayit basariyla eklendi \n ") ;

}

void kayitListele()
{
        
     

        ogrenci *tmp  = head ; 

        while (tmp != NULL)
        {
            printf("isim %s , numara %d , vize %d , final %d \n ",tmp->isim,&tmp->numara,&tmp->vize,&tmp->final);
            tmp = tmp -> next; 
        }
           numarayagoresirala();

}

void numarayagoresirala()
{
        if(head == NULL || head -> next == NULL)
        {
                return ;
        }

        ogrenci *p = head ; 
        ogrenci *q = NULL ; 

        int tempnumara , tmpvize , tmpfinal ; \

        char ad[50];

        for(p = head ; p -> next != NULL ; p=p->next)
        {
            for(q = p ->next ; q != NULL ; q = q ->next)
            {
                    if(p -> numara > q -> numara)
                    {
                            tempnumara = p -> numara ;
                            p -> numara = q -> numara ;
                            q -> numara = tempnumara ;

                            strcpy(ad , p -> isim);
                            strcpy(p->isim , q -> isim);
                            strcpy(q->isim,ad);

                            tmpvize = p -> vize ;
                            p->vize = q -> vize ;
                            q->vize = tmpvize ;
                         
                            tmpfinal = p -> final ;
                            p->final = q -> final ;
                            q->final = tmpfinal ;



                    }

            }

        }

}

void KayitGuncelle()
{
    int numara ;

    printf("Guncellenecek numaryi girin \n ");
    scanf("%d",&numara);

        ogrenci *tmp = head ; 

        while(tmp != NULL)
        {
            if(tmp->numara == numara)
            {
                printf("Yeni bilgileri giriniz \n ") ;
                printf("YENI isim :\n");
                scanf("%s",tmp ->isim);
                printf("YENI numar :\n");
                scanf("%s",&tmp -> numara);
                printf("YENI final :\n");
                scanf("%s",&tmp -> final);
                printf("YENI vize :\n");
                scanf("%s",&tmp -> vize);
                return ;
            }
            tmp = tmp -> next ;


        }
        printf("Ogrenci bulunamadi \n ");
}

void sinifOrtalamasi()
{
    int toplamVize = 0 , toplamfinal = 0  , ogrencisayisi = 0 ;

    ogrenci *tmp = head ;

    while(tmp != NULL)
    {
        toplamVize = toplamVize + tmp ->vize ;
        toplamfinal = toplamfinal + tmp -> final ;
        ogrencisayisi++;
        tmp = tmp -> next ;
    }
        if(ogrencisayisi > 0)
        {
          printf("sinifin vize ortalamasi : %f ",(float)toplamVize/ogrencisayisi);
           printf("sinifin final ortalamasi : %f ",(float)toplamfinal/ogrencisayisi);

        }
        else{
            printf("ogrenci yok \n ") ;
        }

}
void enbasariliogrenci()
{
    if(head == NULL)
    {
        printf("yeterince ogrenci yok \n");
        return;
    }

    ogrenci *tmp = head ;
    ogrenci *enbasrili = tmp ;
while(tmp != NULL)
{
    if(((tmp ->vize * 0.4) + (tmp -> final *0.6))>((enbasrili->vize*0.4)+(enbasrili->final*0.6)))
    {
        enbasrili = tmp ;

    }
    tmp -> next ;
}
printf("en basarili ogrenci ismi ve numarsi %s , %d ",enbasrili->isim,&enbasrili->numara);
}

void KayitSil()
{
    ogrenci *p = head ; 
    ogrenci *q ;

    int numara ;
    printf("silinecek ogrenciin numarasini girin \n ");
    scanf("%d",&numara);

    while(p != NULL && &p ->numara != numara)
    {
        q = p ;
        p = p -> next ;


    }
    if(p == NULL)
    {
        printf("aradiginiz ogrenci yok ") ;
        return;
    }
    if(q == NULL)
    {
            head = p -> next ;
    }
    else 
    {
        q->next  = p -> next ;

    }
    free(p);
    printf("basariyla silindi \n ") ;
}

void dugumYerDegistir(int numara1 , int numara2)
{
    if(numara1 == numara2)
    {
        printf("numaralar ayni yer degistirme yapilamaz \n ");
    }

    ogrenci *prevx = NULL , *currX = head ;
    ogrenci *prevY = NULL , *currY = head ;

    while(currX != NULL && currX -> numara != numara1)
    {
            prevx = currX ;
            currX = currX -> next ;
    }

    while(currY != NULL && &currY -> numara != numara2)
    {
        prevY = currY ;
        currY = currY -> next ;
    }

    if(currX == NULL || currY == NULL)
    {
        printf("numaralar bulunamadi\n");
    }

   if(prevx != NULL)
   {
    prevx -> next = currY;
   }
   else{
    head = currY;
   }

   if(prevY != NULL)
   {
    prevY -> next = currX ;
   }
   else{
    head = currX;
   }


   ogrenci *tmp = prevY -> next ;
   prevY -> next = prevx -> next ;
   prevx -> next = tmp ;

   printf("dugumlerin yeri degistirildi \n ") ;

}

void Eklemefunc(int numara , char *ad[50],int vize ,int final ,int konum)
{
        ogrenci *yeni = (ogrenci*)malloc(sizeof(ogrenci));
        yeni -> numara = numara ;
        strcpy(yeni->isim,ad);
        yeni -> vize = vize ;
        yeni -> final = final ;
        yeni -> next = NULL ;

        if(konum == 0)
        {
            yeni -> next = head ;
            head = yeni ;
            return ;
        }

        ogrenci *tmp = head ;
        
        int count = 0 ;

        while(tmp != NULL && count < konum - 1 )
        {
            tmp = tmp -> next ;
            count++;
        }


        if(tmp == NULL)
        {
            printf("boyle bir sey yok sona eklenecek\n ");
            tmp = head ;
            while(tmp -> next != NULL)
            {
                tmp = tmp -> next ;
            }
            tmp -> next = yeni ;

          
        }
       else{
            yeni -> next = tmp -> next; 
            tmp -> next = yeni ;
       }

       printf("yeni dugum belirtilen dugume eklendi \n ") ;
        
}

