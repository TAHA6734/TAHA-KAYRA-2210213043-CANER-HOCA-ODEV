#include <stdio.h>
#include <stdlib.h>
int usluIfade( int , int );

int main()
{
    int taban , us ;
    printf("olusturacagiin uslu ifadenin tabanini girin \n ");
    printf("Taba : ");
        scanf("%d",&taban);

    printf("olusturacagiin uslu ifadenin kuvvetini girin \n ");
    printf("kuvvet : ");
        scanf("%d",&us);

    printf("%d uzeri %d nin sonucu = %d\n",taban,us,usluIfade(taban,us));

    return 0;
}

int usluIfade (int a ,int b){

int sonuc = 1 ;

for(int sayac = 0 ; sayac < b ; sayac++ )

    {

    sonuc = sonuc * a;

    }

return sonuc ;
}
