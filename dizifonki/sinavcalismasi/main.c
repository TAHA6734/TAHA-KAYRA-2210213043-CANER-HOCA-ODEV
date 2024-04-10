#include <stdlib.h>
#include <stdio.h>


int main ()
{

int a[10];
int i;
for( i = 0 ; i < 10 ; i++)
{
    printf("a[%d]:",i);
    scanf("%d",&a[i]);
}
printf("\n");
for(int j = 0 ; j < 10 ; j++)
{
    a[i]=a[j];
    i--;
    printf("a[%d]:",j);
    printf("%d\n",a[i]);
}






return 0 ;
}
