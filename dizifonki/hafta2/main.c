#include <stdio.h>
#include <stdlib.h>



int faktoriyel(long x)
{

   if(x <= 1 )
   {
       return 1 ;
   }
   else
   {
       return (x * faktoriyel(x-1));
   }

}




int main()
{


   for(int i = 0 ; i < 10 ; i++)
   {
       printf("%d\n",faktoriyel(i));
   }


    return 0;
}
