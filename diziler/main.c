#include <stdio.h>
#include <stdlib.h>

int main()
{

/*char isim[4]="cam";
char isim[4]={'c','a','m','\0'};
for(int i=0;i<4;i++){
    printf("%d. elamanin %c\n",i,isim[i]);
}*/


//char takim_ismi[] ={'B','a','r','c','a','\0'};

/*for(int i=0;i<6;i++){
    printf("%c ",takim_ismi[i]);

}*/


//printf("%s ",takim_ismi);








char ulke_ismi[7];
for(int i=0;i<7;i++){
printf("lutfen bir ulke giriniz\n");
scanf(" %c",&ulke_ismi[i]);

}

printf("%s",ulke_ismi);


    return 0;
}







