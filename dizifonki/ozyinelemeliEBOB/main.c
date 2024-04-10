#include <stdio.h>
#include <stdlib.h>


int ebob( sayi1 , sayi2 )
{
    if(sayi2 != 0 )
    {
        return ebob(sayi2 , sayi1 % sayi2) ;
    }
    else
    {
        return sayi1;
    }
}


int main()
{



   int sayi1 , sayi2 ;
   scanf("%d%d" , &sayi1 , &sayi2 ) ;

    printf("sayilarin ebobu : %d \n " , ebob(sayi1,sayi2)) ;











    return 0;
}
