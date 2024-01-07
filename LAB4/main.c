

#include <stdio.h>
#include <stdlib.h>
int main(){
int dizi[100];
int a[100][100];
int i, j, n, x, sat, sut;
printf("Diziniz kac elemandan olusacak? > ");
scanf("%d",&n);
for(x=0; x<n; x++){
printf("Dizinin [%d] . elemanini gir > ",x+1);
scanf("%d",&dizi[x]);
}
printf("\nMatrisin Satir sayisini gir > ");
scanf("%d",&sat);
printf("matrisin sutun sayisini gir > ");
scanf("%d",&sut);


if(n%sat==0 && n%sut==0){
x=0;
for(i=0; i<sat; i++){
for (j=0; j<sut; j++){
a[i][j]=dizi[x];
x++;
}
}
printf("\n\nMATRIS > \n");
for(i=0; i<sat; i++){
for(j=0; j<sut; j++){
printf("%d", a[i][j]);
printf("\n");}
}
} else
printf("HATA! Dizi Eleman Sayisi Satir veya Sutuna Tam bolunmelidir");
return 0;
}
