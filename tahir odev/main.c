#include <stdio.h>
#include <stdlib.h>

int main()
{
float bakiye;
float tutar;
int islem;
printf("bakiyenizi giriniz\n");
scanf("%f",&bakiye);
printf("lutfen yapmak istediginiz islemi secin 1.para cekme 2.para yatirma 3.kredi karti iade\n");
scanf("%d",&islem);
if(islem==2){
    printf("yatirmak istediginiz tutari giriniz\n");
    scanf("%f",&tutar);
    bakiye+=tutar;
    printf("toplam tutar %.1f\n",bakiye);
    main();

}
if(islem==1){
    printf("cekme istediginiz tutari giriniz\n");
    scanf("%f",&tutar);
    bakiye-=tutar;
    printf("toplam tutar %.1f",bakiye);
    main();

}

if(islem==3){
    printf("kredi karti iade edildi\n");
    main();

}

else {
    printf("lutfen gecerli bir islem giriniz");
    main();
}






    return 0;
}
