#include <stdio.h>
#include <stdlib.h>

void yerDegistirme (int *x , int *y )
{
    int temp = *x ;
    *x = *y ;
     *y = temp ;

}




int main()
{
   int sayi1 , sayi2 ;
   scanf("%d%d", &sayi1,&sayi2) ;
   printf("Sayi1:%d\n",sayi1) ;
   printf("Sayi2:%d\n",sayi2) ;

 yerDegistirme(&sayi1 , &sayi2 ) ;


  printf("Sayi1:%d\n",sayi1) ;
   printf("Sayi2:%d",sayi2) ;







    return 0;
}
