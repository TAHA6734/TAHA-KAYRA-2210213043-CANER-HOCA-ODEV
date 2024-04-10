#include <stdio.h>
#include <stdlib.h>

int main()
{
char **cokboyutlukarater ;



cokboyutlukarater = malloc(sizeof(char*) * 3  ) ;

for(int i = 0 ; i < 3 ; i++)
{
    cokboyutlukarater[i]= malloc( 10 * sizeof(char )) ;
}


    return 0;
}
