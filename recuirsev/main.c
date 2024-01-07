#include <stdio.h>
#include <stdlib.h>

int toplama(int num)
{

    if(num!=0)
    {
        return num+toplama(num-1);
    }

    else
    {
        return num;
    }
}




int main()
{
    int num;
    printf("please selecet a number\n");
    scanf("%d\n",&num);

   printf("%d\n",toplama(num));



    return 0;
}
