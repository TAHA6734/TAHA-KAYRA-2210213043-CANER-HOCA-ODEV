#include <stdio.h>
#include <stdlib.h>
#define N 10

int maxBulma(int b [] , int size ) ;


int main()
{
  int a[N];

  for(int i = 0 ; i < N ; i++)
    {
       printf("a[%d]:",i);

       scanf("%d",&a[i]);

    }

maxBulma(a,N);


    return 0;
}

int maxBulma(int b [ ] , int size )
{

    int max1 = 0 , max2 = 0  , max1index , max2index ;

    for( int i = 0 ; i<size ; i++)
        {
          if(b[i] > max1)
            {

               max1=b [i] ;
                max1index = i ;
            }

            if(b[i]<max1 && b[i]>max2)
                {

                   max2 = b[i];
                   max2index = i ;

                }


        }

printf("en buyuk dizi a[%d] : %d\n",max1index,max1);
        printf("en buyuk 2. dizi a[%d] : %d \n",max2index,max2);

}

