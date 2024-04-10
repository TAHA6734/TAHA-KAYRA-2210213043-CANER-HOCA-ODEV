#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n,satir,sutun;
   int dizi[100];
   int matrix[100][100];
   printf("kac elemanli bir matrix olusturacaksin ? \n ");
   scanf("%d",&n);


        for(int i = 0 ; i< n ; i++)
            {
                printf("dizi[%d]:",i);
                scanf("%d",&dizi[i]);
            }


    printf("peki satir sayisi gir \n");
    scanf("%d",&satir);
    printf("peki sutun sayisi gir \n");
    scanf("%d",&sutun);


    if(n%satir==0 && n%sutun==0)
      {
          int x=0;
          for(int i = 0 ; i<satir;i++)
            {
               for(int j = 0 ; j<sutun;j++)
               {
                 matrix[i][j]=dizi[x];
                 x++;
               }

            }
            printf("olusturulmus yeni matrix \n");
              for(int i = 0 ; i<satir;i++)
            {
               for(int j = 0 ; j<sutun;j++)
               {
                printf("%3d",matrix[i][j]);

               }
               printf("\n");

            }

        }
        else{
            printf("hatali giris satir ve sutun sayilariini ikiside eleman sayisina esit olmali \n");
        }




    return 0;
}
