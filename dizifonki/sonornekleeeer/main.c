#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char isim[100];
    scanf("%s",&isim);
    int uzunluk = strlen(isim);
    for(int i =0 ; i<uzunluk;i++)
    {  for(int j = i+1 ; j<uzunluk;j++)
    {
        if(isim[i]>isim[j])
        {
            char temp =isim[i];
            isim[i]=isim[j];
            isim[j]=temp;

        }
    }
    }
    printf("%s",isim);

    return 0;
}
