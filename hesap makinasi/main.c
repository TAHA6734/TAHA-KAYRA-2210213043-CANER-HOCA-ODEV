#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

int secim;
float sayi1,sayi2;

menu: printf("lutfen yapmak istediginiz islemi secin...\n");
printf("1.Toplama\n2.Cikarma\n3.Carpma\n4.Karekok\n5.Kuvvet\n6.Bolme");
printf("isleminiz bittiyse -1 basip cikabilirsiniz");
scanf("%d",&secim);

if(secim>0 && secim<7) {printf("lutfen islem yapmak icin 2 adet sayi giriniz\n");
scanf("%f%f",&sayi1,&sayi2);}

if(secim==-1){
    goto cikis;
}


switch(secim){

case 1: printf("Toplamlari = %f\n",sayi1+sayi2);
break;

case 2: printf("Cikarim = %f\n",sayi1-sayi2);
break;

case 3: printf("Carpimlari = %f\n",sayi1*sayi2);
break;

case 4:printf("Karekok %f=%f,Karekok %f=%f\n",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2));
break;

case 5:printf("%f uzeri %f=%f\n",sayi1,sayi2,pow(sayi1,sayi2));
break;

case 6:printf("Bolumleri = %f\n",sayi1/sayi2);
break;

default : printf("bu islemler disinda baska bir islem yapamazsin git telefonun kullan\n");
}
















goto menu;

  cikis:  return 0;
}
