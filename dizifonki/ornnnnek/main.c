#include <stdio.h>
#include <string.h>
void notOrtalamasi(int a[],int size );
void enYuksekNot(int b [],int size );


int main()
{


int not [10];

for(int i = 0 ; i < 10 ; i++)
{
    printf("%d. ogrencinin notunu giriniz:",i+1);
    scanf("%d",&not[i]);
     int girildi = 0 ;
    for(int j = 0 ; j<i ; j++)
    {
        if(not[i]==not[j])
        {
            girildi = 1 ;
            break ;
        }
    }
    if (girildi) {
            printf("%d zaten girilmisti.\n", not[i]);
        } else {
            printf("%d girilmedi.\n", not[i]);
        }
}

notOrtalamasi(not , 10);
enYuksekNot(not , 10 );












    return 0;
}

void notOrtalamasi(int a[], int size )
{
    int sum = 0 ;
    int avrg ;
    for(int i = 0 ; i<size ; i++)
    {
        sum = sum + a[i];
    }
    avrg = sum / size ;
    printf("ogrenci notlarinin ortalamasi : %d\n",avrg);
}
void enYuksekNot(int b [],int size )
{
   int max = b[0] ;
 int  min = b[0];
   for(int i =0 ; i<size; i++)
   {
       if(b[i]>=max)
       {
           max = b[i];
       }


      if(b[i]<=min){

        min = b[i];
      }
   }

   printf("en yuksek not : %d\n ", max  );
    printf("en dusuk not : %d \n", min  );
}






