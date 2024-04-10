#include <stdio.h>
#include <stdlib.h>

int maxbul ( int a [] , int size )
{
    if(size == 1)
    {
        return a[0] ;
    }

    int maxInRest = maxbul(a + 1 , size  - 1 ) ;



    if(a[0] > maxInRest)
    {
        return a[0] ;
    }
    else
    {
        return maxInRest ;
    }


}


int main()
{

int arr[100]  ;
 int  n ;

 printf("dizinin boyutunu gir \n ") ;

    scanf("%d",&n) ;


    for(int i = 0 ; i< n ; i++)
    {
        printf("%d.eleman : ",i+1) ;

        scanf("%d",&arr[i]);

    }

int max_element = maxbul(arr , n ) ;

 printf("Dizideki en büyük eleman: %d\n", max_element );



    return 0;
}
