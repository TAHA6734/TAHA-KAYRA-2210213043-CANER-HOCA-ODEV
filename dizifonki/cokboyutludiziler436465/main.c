#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maxRow = 0 , minCol = 0, minRow = 0, maxCol = 0, max = 0 , min = 0;
    int sum = 0;
    int matrix [2][3];
    for(int i = 0; i<2; i++)
        {
           for(int j = 0 ; j<3; j++)
           {
             printf("matrix[%d][%d] elemani:",i,j);
             scanf("%d",&matrix[i][j]);

           }
        }


        for(int i = 0 ; i<2 ; i++)
            {
              for(int j = 0; j<3; j++)
              {
                sum = sum + matrix[i][j];
                 printf("matrix[%d][%d] = %d\n",i,j,matrix[i][j]);
              }
            }

             for(int i = 0 ; i<2 ; i++)
            {
              for(int j = 0; j<3; j++)
              {
                if((i==0 && j==0) || matrix[i][j] > max)

                    {
                      max = matrix[i][j];
                      maxRow = i;
                      maxCol = j;


                    }
             if ((i==0 && j==0)||matrix[i][j] < min)
                    {
                        min = matrix[i][j];
                        minRow = i;
                        minCol = j;

                    }

              }
            }


printf("%d\n",sum);
printf(" maximum value is matrix[%d][%d] = %d\n",maxRow,maxCol,max);
printf(" minimum value is matrix[%d][%d] = %d\n",minRow,minCol,min);




    return 0;
    }





