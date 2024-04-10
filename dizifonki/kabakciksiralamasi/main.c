#include <stdio.h>
#include <stdlib.h>


void bubbleSort ( int dizi []  , int size )
{

    for( int i = 0 ; i < size ; i++ )
    {
        for( int j =  1 ; j < size  - i ; j++ )
        {
            if(dizi[j-1] > dizi[ j ])
            {

                int temp = dizi[j-1] ;
                dizi[j-1] = dizi[j] ;
                dizi[j] = temp ;
            }
        }
    }

}


int main()
{



  int boyut ;

  printf("Kac elemanli bir dizi olusturacaksin \n ") ;

  scanf("%d" , &boyut ) ;

  int *tamsayidizisi = (int *)calloc(sizeof(int) , boyut ) ;

  if(tamsayidizisi == NULL)
  {
      printf("user error ! \n ") ;
      return -1 ;
  }


  for(int i = 0 ; i < boyut ; i++){

    printf("%d. eleman : " , i+1 );
    scanf("%d",&tamsayidizisi[i]) ;
  }

 bubbleSort(tamsayidizisi , boyut );


for(int i = 0 ; i < boyut ; i++)
{
    printf("%d\n " , tamsayidizisi[i]) ;
}











    return 0;
}
