#include <stdio.h>
#include <stdlib.h>

int main()
{
    int satir ,sutun ;
    int matrix [100][100];
    int simetrik = 1 ;

         printf("satir sayisi gir \n ");
         scanf("%d",&satir);
         printf("sutun sayisi gir \n ");
         scanf("%d",&sutun);

   for(int i = 0 ; i < satir ; i++)
        {
           for(int j = 0 ; j < sutun ; j++)
            {

              printf("matrix[%d][%d]:",i,j);
              scanf("%d",&matrix[i][j]);
            }
        }

        for(int i = 0 ; i < satir ; i++)
        {
           for(int j = 0 ; j < sutun ; j++)
            {
            if(matrix[i][j] != matrix[j][i]){
                simetrik = 0;
                break;
            }


            }
        }
if(simetrik==1){
printf("\nMatris Simetriktir.\n");
}
 else{
printf("\nMatris Simetrik Degildir\n");
}

























    return 0;
}
