#include <stdio.h>
#include <stdlib.h>

int main()
{
int i , n ;
 char ters[40],temp;
    gets(ters);
    for( n = 0 ; ters[n]!= '\0'; n++ )
        {
          for( i = 0 ; i<n/2; i++)
            {
               temp = ters[n-i-1];
               ters[n-i-1] = ters[i];
               ters [i] = temp;

            }

        }
         printf("Tersi : %s\n",ters);
    return 0;
}
