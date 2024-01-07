#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , uzunluk = 0;

    char s1[100],s2[100];

    printf("enter the firs word\n");
    gets(s1);

    printf("enter the second word\n");
    gets(s2);


    for( i = 0 ; s1[i] != ' \0 '; i++)

      uzunluk++;


    printf(" %s",s2);

    for( i = uzunluk - 1; i >=0; i--)

      printf(" %c",s1[i]);
    return 0;
}
