#include <stdio.h>
#include <conio.h>
int main(){
 int a[100][100];
 int simetri=1;
 int x, y, i, j;
 printf("Matrisin satir sayisini gir > ");
 scanf("%d",&x);
 printf("Matrisin sutun sayisini gir > ");
 scanf("%d",&y);
 printf("Matrisin degerlerini gir > ");
 for(i=0; i<x; i++) {
 for(j=0; j<y; j++) {
 printf("\n Deger [%d] [%d] --> ", i+1, j+1);
 scanf("%d", &a[i][j]);
 }
 }






 for(i=0; i<x; i++){
 for(j=0; j<y; j++){
if(a[i][j] !=a [j][i])
 simetri=0;
break;
 }
 }

 if(simetri==1){
printf("\nMatris Simetriktir.\n");}
 else{
printf("\nMatris Simetrik Degildir\n");}
 return 0;
}

