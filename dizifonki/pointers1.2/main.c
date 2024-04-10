#include <stdio.h>
#include <stdlib.h>

float toplama(float *x , float *y)
{
    return *x + *y ;
}

float cikarma (float *a , float *b )
{
   return  *a - *b ;
}

float carpma (float *a , float *b )
{
    return  *a * (*b) ;
}

float bolme (float *a , float *b )
{
    return  *a  / *b ;
}

int main()
{

    printf("Lutfen iki sayi girin \n ") ;

    float sayi1 , sayi2 ;

    scanf("%f%f",&sayi1,&sayi2) ;

    printf("toplma :%f\n",toplama( &sayi1 , &sayi2 ) );
    printf("cikarma : %f\n",cikarma( &sayi1 , &sayi2 ) );
    printf("carpma : %f\n",carpma( &sayi1 , &sayi2 ) );
    printf("bolme : %f",bolme( &sayi1 , &sayi2 ) );











    return 0;
}
