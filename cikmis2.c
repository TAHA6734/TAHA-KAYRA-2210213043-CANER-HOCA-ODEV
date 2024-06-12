#include <stdio.h>
#include <stdlib.h>


int main()
{
        FILE *dosya ; 

        char satir1[50];
        char satir2[50]; 

        int satirNo1 = 8 ;
        int satirNo2 = 11 ;
        int gecici = 0 ;

        dosya = fopen("dosya.dat","r");

        if(dosya == NULL)
        {
            printf("dosya acilimiyor \n ");
            exit(EXIT_FAILURE);
        }

        for(int i = 1 ; i < satirNo1 ; i++)
        {
            fgets(satir1,sizeof(satir1),dosya);
        }        

        for(int i =satir1+1; i < satir2 ; i++)
        {
            fgets(satir2,sizeof(satir2),dosya);
        }

       
        fseek(dosya,0,SEEK_SET);

        for(int i = 1 ; i < satirNo2 ; i++)
        {
                if(i == satirNo1)
                {
                    fputs(satir2,dosya);
                }
                else if(i == satirNo2)
                {
                    fputs(satir1,dosya);
                }
                else 
                {
                    fgets(satir1,sizeof(satir1),dosya);
                }
        }



    fclose(dosya);

    return 0 ;



}