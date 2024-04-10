#include <stdio.h>
#include <stdlib.h>

int main()
{
   int NotDefteri[3][3],ogrenci,notu;
   for(int i = 0 ; i<3; i++)
        {
          for(int j = 0 ; j<3; j++)
          {
            printf("%d. ogrencinin %d. sinavi :",i+1,j+1);
            scanf("%d",&NotDefteri[i][j]);
          }
        }

            printf("kacinci ogrencinin kacinci notunu ogrenmek istersin ?\n");
            scanf("%d",&ogrenci);
            scanf("%d",&notu);

            if(ogrenci>=1 && ogrenci<=3 && notu <=1 && notu <= 3 )
            {
               printf("%d. ogrencinin %d.sinavi : %d\n",ogrenci,notu,NotDefteri[ogrenci-1][notu-1]);

            }

            else {
                printf("syntax error \n ");
            }





    return 0;
}
