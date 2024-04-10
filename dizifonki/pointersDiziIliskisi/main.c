#include <stdio.h>
#include <stdlib.h>

int main()
{
   /*char *takimlar[] = {"besiktas","sakaryaspor","Bursaspor","Trabzonspor","Ankaragucu"} ;
   for(int i = 0 ; takimlar[i] != '\0' ; i++)
   {
       printf("%s\t",*(takimlar + i)) ;}
       */

       char ulkeler [5][20];

       for(int i = 0 ; i<5; i++)
       {
           printf("%d. ulkeyi giriniz:",i+1);
           scanf("%s",&ulkeler[i]);
       }

       for(int i = 0 ; i < 5 ; i++)
       {
           printf("%d. ulke : %s\n",i+1,ulkeler[i]);
       }



          char *ulkelerinAdresi[5];

          for(int i = 0 ; i < 5 ; i++)
          {
              ulkelerinAdresi[i] = &ulkeler[i];
              printf("pointer basimi %s\n",*(ulkelerinAdresi+i));
          }



    return 0;
}
