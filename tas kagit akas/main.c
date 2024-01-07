#include <stdio.h>
#include <stdlib.h>
#define SIZE 50
int main()
{
 int sayac = 0 , kelime = 0 ;
 char A[SIZE];
     printf("cumle icinde kac tane a harfini olacagini soyleyen bir program yaptim\n");
     printf("lutfen 50 karekterli bir cumle yazin\n");
     gets(A);

     for(int i = 0 ; A[i] != '\0' ; i++)
     {
        if (A[i] == 'a')
        {
            sayac++ ;
        }
        else if(A[i] == ' ' )
        {
            kelime++ ;
            printf("%d. kelime %d tane a harfi var \n ",kelime , sayac );
            sayac = 0;
        }
     }
      kelime++ ;
      printf("%d. kelime %d tane a harfi var \n ",kelime , sayac);
    return 0;
}
