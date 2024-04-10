#include <stdio.h>
#include <stdlib.h>
#define A 5
int main()
{

    float diziler [A] = {52.5,-3.2,5.9,98.5,-7.7} ;
     int maxindex = 0 ,minindex= 0;

        for( int i  = 0 ; i < A ; i++)
            {

               if(diziler[i] >= diziler[maxindex])
                    {
                       maxindex = i;
                    }

                else if (diziler[i] < diziler[minindex] )
                    {
                          minindex = i;
                    }


            }
            printf("the minimum value of this array is diziler [%d] : %f\n",minindex,diziler[minindex]);
             printf("the maximun value of this array is diziler [%d] : %f\n",maxindex,diziler[maxindex]);


    return 0;
}
