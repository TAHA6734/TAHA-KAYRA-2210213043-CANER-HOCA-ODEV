#include <stdio.h>
#include <stdlib.h>

int main()
{

int sayi=0;
int x=1;
int toplam=0;
printf("lutfen kacta kaca kadar toplyacaginiz sayiyi giriniz\n");
scanf("%d",&sayi);

while(sayi>0){
   printf("%d\n",x);
   toplam =toplam + x ;

     sayi--;
     x++;

}

  printf("sayilarin toplami = %d",toplam);






    return 0;
}
