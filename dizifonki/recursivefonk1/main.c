#include <stdio.h>
#include <stdlib.h>
int factoriel(int x);
int main()
{
   int sayi = 10 ;
   for(int i = 0 ; i<=10 ; i++)
   {
       printf("%d!=%d\n",i,factoriel(i));
   }
    return 0;
}

int factoriel(int x )
{
    if(x==0 || x==1 )
    {
        return 1 ;
    }
    else
    {
        return (x * factoriel(x-1));
    }
}
