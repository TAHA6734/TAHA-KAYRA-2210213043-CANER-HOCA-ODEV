#include <stdio.h>
#include <stdlib.h>

int main()
{

 /*MENU      SIPARIS KODU     FIYAT

BASLANGICLAR        1            5.5
ARA SICAK           2            7.5
SALATA              3            12
ANA YEMEK           4            17.75
TATLI               5            11.25
ICECEKLER           6            2.25*/

printf("MENU\t\tSIPARIS KODU\t\tFIYAT\n");
printf("Baslangiclar\t\t1\t\t5.5 \n");
printf("Ara sicak\t\t2\t\t7.5 \n");
printf("Salata\t\t\t3\t\t12\n");
printf("Ana yemek\t\t4\t\t17.75 \n");
printf("Tatli\t\t\t5\t\t11.25\n");
printf("icecekler\t\t6\t\t2.25\n");


int siparisKodu;
float toplam;

menu: printf("lutfen yemek istediginiz urunun siparis kodunu giriniz");
printf("isleminiz bittiyse cikisa basin");
scanf("%d",&siparisKodu);

switch(siparisKodu){
case 1: toplam += 5.5; break;
case 2: toplam += 7.5; break;
case 3: toplam += 12; break;
case 4: toplam += 17.75; break;
case 5: toplam += 11.25; break ;
case 6: toplam += 2.25; break ;
 default : printf("menumuzdeki siparis kodu olan sayilari seciniz");



}
}

printf("toplam tutar = %f",toplam);
goto menu;


cikis: printf("isleminiz tamamlandi afiyet olsun....");    return 0;
}
