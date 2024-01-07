#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()

{
   //strlen
   char str1[]="taha ve onun mal arkadaslari";
    int lenght = strlen(str1);
     printf("the lenght of the string is = %d\n",lenght);
     printf(" \n");
    printf(" \n");

      //strcpy
      char str2 []="merhaba lanet dunya";
        char copy [99];
            strcpy(copy,str2);
                printf(" kopyalanan dizi karakteri = %s\n",copy);
                printf(" \n");
                 printf(" \n");

        //strcat

        char str3[6]=" ahhh";
            char str4[3]="be";
                strcat(str3,str4);
                printf("str3 + str4 = %s\n",str3);







    return 0;
}
