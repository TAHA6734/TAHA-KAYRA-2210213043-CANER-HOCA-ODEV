#include <stdio.h>
#include <stdlib.h>

void YildizBas(int *adet)
{
    for(int i  = 0 ; i<*adet ; i++)
    {

          printf("*");
          printf("\t");
    }
}


int main()
{

  /* int x , y = 0 ;

   int *a1,*a2=&y;

   a1 = a2 ;
   x = ++*(a2) ;
   *a2 = *a1 + x ;

    printf("%d\n",x);
     printf("%d\n",y);
      printf("%d\n",*a1);
       printf("%d\n",*a2);
*/

printf("kac adet yildiz basak ? \n ") ;
int sayi ;
scanf("%d",&sayi) ;
YildizBas(&sayi);















    return 0;
}
