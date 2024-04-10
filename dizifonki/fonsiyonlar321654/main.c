#include <stdio.h>
#include <stdlib.h>

void PrintMatris(int b [][3] );


int main()
{

 int array1 [2][3] = {0,1,2,3,4,5};


printf("1. dizinin elemanlari:\n");

    PrintMatris(array1);

printf("1. dizinin elemanlarinin 2 kati :\n");

    PrintMatris(array1);

printf("1. dizinin elemanlarinin 3 kati :\n");

    PrintMatris(array1);

}

PrintMatris(int b [][3])
{


 for(int i = 0 ; i<2; i++)
    {
        int counter= 1 ;
      for(int j = 0 ; j<3; j++)
        {

          printf("%3d",b[i][j]*=counter);


        }
        printf("\n");
        counter++;
    }


}



