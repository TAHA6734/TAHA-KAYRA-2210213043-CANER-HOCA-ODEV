#include <stdio.h>
#include <stdlib.h>

int main()
{
   char kelime [100];
   scanf("%s",&kelime);
   int uzunluk = 0 ;

            for(int i = 0 ; kelime[i]!= '\0'; i++)
            {
                uzunluk++;
            }






     for(int x = 0 ; x<uzunluk; x++)
            {
                for(int z = 1 + x ; z < uzunluk ; z++)
                {
                    if(kelime[x]>kelime[z])
                    {
                        char temp = kelime[x];
                        kelime[x] = kelime [z];
                        kelime [z] = temp ;
                    }

                }
            }
            printf("%s\n",kelime);


    return 0;
}
