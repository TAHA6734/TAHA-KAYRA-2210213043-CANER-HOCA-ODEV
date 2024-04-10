#include <stdio.h>
#include <stdlib.h>
#define SAT 2
#define SUT 3

int main()
{
    int a[SAT][SUT] = {1,2,3,4,5,6} ;
    int b[SAT][SUT] = {1,2,3,4,5,6} ;
    int c[SAT][SUT];

        printf("A MATRIXI \n");
     for(int i = 0 ; i<SAT ; i++)
        {
          for(int j = 0 ; j<SUT ; j++)
          {
                printf("%3d",a[i][j]);

          }
          printf("\n");
        }


             printf("B MATRIXI \n");
     for(int i = 0 ; i<SAT ; i++)
        {
          for(int j = 0 ; j<SUT ; j++)
          {
                printf("%3d",b[i][j]);

          }
          printf("\n");
        }



                  printf("C MATRIXI \n");
     for(int i = 0 ; i<SAT ; i++)
        {
          for(int j = 0 ; j<SUT ; j++)
          {      c[i][j]=a[i][j]+b[i][j];
                printf("%3d",c[i][j]);

          }
          printf("\n");
        }






    return 0;
}
