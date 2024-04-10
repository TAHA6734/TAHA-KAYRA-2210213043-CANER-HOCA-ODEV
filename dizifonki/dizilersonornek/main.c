#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   int n ;
   srand(time(NULL));

   printf("print 10 random number between [1,100]\n");

   for(int i = 0 ; i < 10 ; i++)
    {
         n = rand() % 100 + 1 ;
            printf("%d\n",n);

    }


    return 0;
}
