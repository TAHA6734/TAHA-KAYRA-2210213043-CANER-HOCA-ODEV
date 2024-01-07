#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayi,faktoriyelSonuc=1;
printf("FAKTORIYELINI ALMAK ISTEDIGINIZ SAYIYI GIRINIZ...\n");
scanf("%d",&sayi);


int kullanicininGirdigiSayi=sayi;

while(sayi>=0){
    if(sayi==0){
        faktoriyelSonuc*=1;
    }
    else{
        faktoriyelSonuc*=sayi;
    }
       sayi--;
}


printf("%d!
       =%d",kullanicininGirdigiSayi,faktoriyelSonuc);











    return 0;
}
