#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int dizi[], int size) {
    for (int i = 0; i < size; i++)

        {

        for (int j = 1; j < size - i; j++)

         {
            if (dizi[j - 1] > dizi[j])

            {
                int temp = dizi[j];
                dizi[j] = dizi[j - 1];
                dizi[j - 1] = temp;
            }
        }
    }
}

void SelectionSort(int dizi[], int size) {

    int enKucukIndex ;

        for(int i = 0 ; i < size ; i++)
        {
            enKucukIndex = i ;

            for(int j = i ; j < size ; j++)
            {
                if(dizi[j] < dizi[enKucukIndex])
                {
                  enKucukIndex = j ;
                }
            }
            int temp  = dizi[i] ;
            dizi[i] = dizi[enKucukIndex] ;
            dizi[enKucukIndex] = temp ;

        }
}

void InsertionSort(int dizi[], int size) {
    int oncesi;
    int eleman;

    for (int i = 1; i < size; i++) {
        oncesi = i - 1;
        eleman = dizi[i];

        while (oncesi >= 0 && dizi[oncesi] > eleman) {
            dizi[oncesi + 1] = dizi[oncesi];
            oncesi--;
        }
        dizi[oncesi + 1] = eleman;
    }
}

int main() {
    int dizi[] = {7, 58, 36, 1, 25, 35, 99, 45};
    int size = sizeof(dizi) / sizeof(dizi[0]);

    printf("Başlangıç durumu: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("BUBBLE SORT DENEMESI: \n");
    BubbleSort(dizi, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    // SelectionSort çağrısı buraya eklenecek

    printf("INSERTION SORT DENEMESI: \n");
    InsertionSort(dizi, size);
    for (int i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    printf("SELECTION SORT DENEMESI : \n ") ;

    SelectionSort(dizi , size ) ;
    for(int i = 0 ; i <size ; i++)
    {
        printf("%d ", dizi[i] );
    }

    return 0;
}

