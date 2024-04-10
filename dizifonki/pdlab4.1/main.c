#include <stdio.h>
#include <stdlib.h>


int sum ( int n )
{

   if(n!=0)
   {
       return n + sum(n-1) ;
   }
}


int main()
{



   int sayi ;
   printf("Bir sayi girin : ") ;
   scanf("%d",&sayi) ;
   printf("toplam sonucu : %d\n",sum (sayi) );

    return 0;
}
