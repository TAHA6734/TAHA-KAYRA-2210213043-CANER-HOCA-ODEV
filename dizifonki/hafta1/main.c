#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{


  srand(time(NULL)) ;



  for(int i = 0 ; i < 100 ; i++)
  {
        int rastgelesayi = 31 + rand() % 71 ;
      printf("%d\n" , rastgelesayi ) ;
  }




    return 0;
}
