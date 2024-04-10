#include <stdio.h>
#include <stdlib.h>
#define MAX 100
void insertionSort ( int dizi[ ] , int size)
{
    int eleman ;
    int oncesi ;

    for(int i = 1 ; i < size ; i++)
    {
        eleman = dizi[i] ;
        oncesi = i-1;

        while(oncesi>=0 && dizi[oncesi]  > eleman )
        {
            dizi[oncesi+1] = dizi[oncesi] ;
                  oncesi--;
        }
        dizi[oncesi+1] = eleman ;
    }
}








int main()
{


    int boyut ;

    printf("kac elemanli bir dizi olusturacaksiniz ? \n " ) ;

    scanf("%d",&boyut) ;

    int *tamsayiDizisi  = (int *)calloc(sizeof(int) , boyut ) ;

    for(int i = 0 ; i < boyut ; i++)
    {
        printf("%d elemani girin \n : " , i+1) ;
        scanf("%d",&tamsayiDizisi[i]) ;
    }

   insertionSort( tamsayiDizisi , boyut );

    printf("Sıralı dizi:\n");
    for (int i = 0; i < boyut; i++) {
        printf("%d ", tamsayiDizisi[i]);
    }
    printf("\n");

    free(tamsayiDizisi); // Belleği serbest bırak

    return 0;
}
