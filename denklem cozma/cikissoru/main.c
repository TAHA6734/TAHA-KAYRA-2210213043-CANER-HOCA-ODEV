#include <stdio.h>
#include <stdlib.h>
void ortalama (int b[][3]);

int main()
{
     int notlar [4][3] = { 67 ,76 ,55 ,34 ,79 ,76 ,56, 68 ,57 ,66 ,89 ,65} ;

     for(int i = 0 ; i<4; i ++)
     {
         for (int j = 0 ; j< 3 ; j++)
         {
             printf("notlar[%d][%d]:",i,j);
             printf("%d\n",notlar[i][j]);
         }
     }
     ortalama(notlar);
    return 0;
}


void ortalama (int b [] [3])
{

 int maxortalama = 0 ;
 int maxindex = -1 ;

   for(int i = 0 ; i<4;i++)

   {
       int avrg ;
       int sum = 0 ;
       for(int j = 0 ; j<3;j++)
       {
           sum = sum + b[i][j];
           avrg= sum / 3 ;

       }
        printf("%d. students note average is : %d\n",i+1,avrg);


         if(avrg>maxortalama)
         {
             maxortalama = avrg  ;
             maxindex = i ;
         }



   }


   if(maxindex != -1)
   {
       printf("%d. ogrenci en yuksek ortalama : %d ",maxindex+1 ,maxortalama);
   }


}






