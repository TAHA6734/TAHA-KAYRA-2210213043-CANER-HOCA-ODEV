#include <stdio.h>
int fact(int x )
{
    if(x==0)
    {
        return 1 ;
    }
    else
    {
        return x * fact(x-1);
    }
}



int main(void){

 int num = 5 ;
 printf("%d\n",fact(num));


return 0;
}
