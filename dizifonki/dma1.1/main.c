#include <stdio.h>
#include <stdlib.h>

int main()
{

/*int *sayidizisi = calloc( 5 , sizeof(int)) ;
int average  ;
int sum = 0 ;

for(int i = 0 ; i<5 ; i++ )
{


    printf("%d. degeri gir : ",i+1);
    scanf("%d",&sayidizisi[i]);
    sum = sum + sayidizisi[i] ;


}

average = sum / 5 ;
printf("%d\n",average);*/




char** karakterDizisi = malloc(sizeof(char*) * 3 ) ;

for(int i = 0 ; i< 3 ; i++)
{
     karakterDizisi[i] = malloc( 10 * sizeof(char)  ) ;
}


}for(int i = 0 ; i < 3 ; i++)
{
    scanf("%s",karakterDizisi[i]);

for (int i = 0; i < 3; i++)
    {
        free(karakterDizisi[i]);
    }
    free(karakterDizisi);


    return 0;
}
