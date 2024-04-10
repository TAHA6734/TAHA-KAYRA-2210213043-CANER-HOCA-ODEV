#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{       char str[] = "Taha Kayra" ;   char str2[] = " TEKIN " ;

    printf("STRLEN KULLANIMI \n");
    int uzunluk = strlen(str) ;
    printf("isminin uzunlugu : %d \n " , uzunluk ) ;


    printf("\n\n\n\n") ;


    printf("STRCAT KULLANIMI \n");
    strcat(str,str2 ) ;
    printf("%s\n" , str) ;


    printf("\n\n\n\n") ;


    printf("STRCPY KULLANIMI \n ") ;
    char hedefYer [20] ;
    strcpy(hedefYer , str2 );
    printf("%s\n",hedefYer) ;



    printf("\n\n\n\n") ;


   printf("STRCMP KULLANIMI \n ") ;
   char str3 [] =  "aei" ;
   char str4 [] = "cvb" ;

   int sonuc = strcmp(str3, str4) ;

   if (sonuc == 0)
        printf("İki dize birbirine eşittir.\n");
    else if (sonuc < 0)
        printf("İlk dize ikinci dizeden küçüktür.\n");
    else
        printf("İlk dize ikinci dizeden büyüktür.\n");


    return 0;
}
