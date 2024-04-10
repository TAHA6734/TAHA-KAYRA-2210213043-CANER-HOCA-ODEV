#include <stdio.h>
#include <stdlib.h>

void bubblesort(int dizi[], int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        for(int j = 1 ; j < size -i ; j++)
        {
            if(dizi[j-1] > dizi[j])
            {
                int temp = dizi[j] ;
                dizi[j]= dizi[j-1];
                dizi[j-1] = temp ;
            }
        }
    }
}

void Selectionsort(int dizi[], int size)
{
    int lowIndex ;
    for(int i = 0 ; i < size ; i++)
    {
        lowIndex = i;

        for(int j = i ; j <size ; j++)
        {
            if(dizi[lowIndex] > dizi[j])
            {
                lowIndex=j ;
            }
        }

        int temp = dizi[i] ;
        dizi[i] = dizi[lowIndex];
        dizi[lowIndex] = temp ;
    }
}

void Insertionsort(int dizi[], int size)
{
    int before ;
    int temp ;

    for(int i = 1 ; i  < size ; i ++)
    {
        before = i-1 ;
        temp = dizi[i];

        while(before >= 0 && dizi[before] > temp )
        {
            dizi[before + 1 ] = dizi[before] ;
            before--;
        }

        dizi[before+1] = temp;
    }
}

int main()
{
    int boyut ;

    printf("Kaç elemanlı bir dizi oluşturacaksınız?\n") ;
    scanf("%d" , &boyut ) ;

    int *dizi = (int *)malloc(sizeof(int ) * boyut  ) ;

    for(int i = 0 ; i < boyut ; i++)
    {
        printf("%d. eleman : " , i+1 ) ;
        scanf("%d",&dizi[i] ) ;
    }

    printf("Selection Sort:\n") ;
    Selectionsort(dizi , boyut ) ;

    for(int i = 0 ; i < boyut ; i++)
    {
        printf("%d\n",dizi[i]) ;
    }

    printf("Bubble Sort:\n") ;
    bubblesort(dizi, boyut);

    for(int i = 0 ; i < boyut ; i++)
    {
        printf("%d\n",dizi[i]) ;
    }

    printf("Insertion Sort:\n") ;
    Insertionsort(dizi, boyut);

    for(int i = 0 ; i < boyut ; i++)
    {
        printf("%d\n",dizi[i]) ;
    }

    free(dizi) ;

    return 0;
}
