#include <stdio.h>
#include <stdlib.h>

int main()
{
 /*char cinsiyet;
 float boy;

   printf("cinsiyetinizi giriniz\n");
 scanf("%c",&cinsiyet);
   printf("lutfen boyunuzu giriniz \n");
 scanf("%d",&boy);

 if((cinsiyet=='e' || cinsiyet=='E') && 195>=boy>165){
    printf("uygun sartlar");
 }
else if ((cinsiyet=='k'||cinsiyet =='K') &&  185>=boy>160){
    printf("uygun sartlar");
}
else {
    printf("sartlar saglanamadi");*/



     int adet;
 float adetFiyati;
float toplamtutar=adet*adetFiyati;
int toplamHesapYuvarlama=adet*adetFiyati;


/*0-100   -> adet fiyati =3TL
100-200 -> adet fiyati =2.5TL
200-300 -> adet fiyati =2TL
300-400 -> adet fiyati =1.25TL
400>    -> adet fiyati =1.00TL*/

  printf("lutfen alacaginiz adet sayisijni giriniz\n");
  scanf("%d",&adet);

  if (100>=adet>0){
    adetFiyati=3;
printf("toplam odenecek tutar  %f   %d   ",toplamtutar,toplamHesapYuvarlama);
}


else if(200>=adet>100){
    adetFiyati=2.5;
    printf("toplam odenecek tutar  %f   %d   ",toplamtutar,toplamHesapYuvarlama);
}



else if (300>=adet>200){
    adetFiyati=2;
    printf("toplam odenecek tutar  %f   %d   ",toplamtutar,toplamHesapYuvarlama);
}



else if (400>=adet>300){
    adetFiyati=1.25;
    printf("toplam odenecek tutar  %f   %d   ",toplamtutar,toplamHesapYuvarlama);
}



else if(adet>400){
    adetFiyati=1;
    printf("toplam odenecek tutar  %f   %d   ",toplamtutar,toplamHesapYuvarlama);
}



else  {
    printf("urun almiyacaksaniz gidiniz");
}


   return 0;
}

