#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi1 , sayi2 , temp ;

  sayi1 = 10 ;
  sayi2 = 33 ;

  int *ptr ;

  ptr = &sayi1 ;
  temp = *ptr ;

  printf("sayi1 : %d\n",temp) ;

  ptr = &sayi2 ;
  temp =*ptr ;

  printf(" sayi2 : %d\n",temp) ;




  long long  i ;
  long long  *iptr ;
  iptr = &i ;

  printf("i'nin boyutu : %d \n " , sizeof(i)) ;
  printf("*iptr'nin boyutu : %d \n " , sizeof(iptr)) ;





    return 0;
}
