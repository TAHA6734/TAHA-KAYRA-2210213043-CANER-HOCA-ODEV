#include <stdio.h>
#include <stdlib.h>

int main()
{

 int avarage , sum = 0 , notes , counter = 0;
 int  ogrenciNotu[100];
 printf("How many students grades will you enter ? \n ");
 scanf("%d",&notes);
 printf("Enter the student grades please...\n");

 for(int i = 0 ; i < notes  ; i++)
       {
       scanf("%d",&ogrenciNotu[i]);
        if(ogrenciNotu[i]<=100)
            {

                sum = sum + ogrenciNotu[i];
                counter++;
            }
        else if (ogrenciNotu[i]>100)
            {
                printf("the grade doesnt exist please enter a logical grade ... \n");
                i--;
            }
        }

                    avarage = sum / counter ;
                    printf(" the avarage of the %d student is : %d", counter   , avarage );












    return 0;
}
