#include <stdio.h>
#include <stdlib.h>

int main()
{
 int porsche=9000000,mercedes=12000000, ferrari=15000000,volvo=1000000,egea=700000;
 float bakiye;
 printf("lutfen bakiyenizi giriniz\n");
 scanf("%f",&bakiye);
 if(bakiye>=15000000){
   printf("alabileceginiz arabalar listesi\n");
   printf("porsche\n");
   printf("mercedes\n");
   printf("ferrari\n");
   printf("volvo\n");
   printf("fiat egea");
 }
  if(bakiye<15000000 && bakiye>=12000000){
   printf("alabileceginiz arabalar listesi\n");
   printf("porsche\n");
   printf("mercedes\n");
   printf("volvo\n");
   printf("fiat egea");
 }
 if(bakiye<12000000 && bakiye>=9000000){
    printf("alabileceginiz arabalar listesi\n");
   printf("volvo\n");
   printf("fiat egea");
 }
if(bakiye<9000000 && bakiye>=1000000){
   printf("alabileceginiz arabalar listesi\n");
   printf("volvo\n");
   printf("fiat egea");
 }
if(bakiye<1000000 && bakiye>=700000){
   printf("alabileceginiz arabalar listesi\n");
   printf("fiat egea");
 }
if(bakiye<700000 ){
   printf("istediginiz fiyatta araba bulunmamaktadir");

 }

    return 0;
}
