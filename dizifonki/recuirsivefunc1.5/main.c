#include <stdio.h>

int gcd ( int a , int b )
 {
     if(b==0)
     {
         return a ;
     }
        return gcd(b, a % b);



 }

 int lcd ( int a , int b )
 {
      int gcdValue = gcd( a ,  b ) ;
      return ( a * b ) / gcdValue ;


 }


int main()
{



    int sayi1  , sayi2 ;

    printf("Please enter two number. \n ") ;
        scanf("%d%d",&sayi1 , &sayi2 ) ;


 printf("%d ve %d sayilarinin ebobu : %d \n " , sayi1 ,sayi2 , lcd( sayi1, sayi2 )) ;

    return 0;
}
