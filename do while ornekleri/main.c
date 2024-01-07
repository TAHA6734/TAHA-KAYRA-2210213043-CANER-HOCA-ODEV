#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi1,sayi2,Buyuksayi,KucukSayi,kalan;

do{
    printf("ebob'unu bulmak istediginiz iki adet sayi giriniz...\n");
    scanf("%d%d",&sayi1,&sayi2);


}while(sayi1<=0 || sayi2<=0);


   if(sayi1>sayi2){
        Buyuksayi=sayi1;
        KucukSayi=sayi2;
    }
    else {
        Buyuksayi=sayi2;
        KucukSayi=sayi1;
    }
    kalan=Buyuksayi%KucukSayi;

    while(kalan!=0){
    if(kalan>=KucukSayi)
    kalan=Buyuksayi;
    else {
        Buyuksayi=KucukSayi;
       KucukSayi=kalan;
         kalan=Buyuksayi%KucukSayi;
    }




    }
   printf("Ebob(%d,%d)=%d",Buyuksayi,KucukSayi,KucukSayi);
    return 0;
}
