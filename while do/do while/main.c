#include <stdio.h>
#include <stdlib.h>

int main()
{
float sayi,buyuk;
char devam;



do{
    printf("lutfen bir sayi giriniz");

    scanf("%f",&sayi);
    if(sayi>buyuk){
    buyuk=sayi;
    printf("yeni buyuk sayimiz %f",buyuk);
}
else{
    printf("program sonlanmistir");
}



printf("buyuk sayiyi hesaplamak istiyor musunuz\n");
scanf(" %c",&devam);


}



while(devam=='E'||devam=='e');





















    return 0;
}
