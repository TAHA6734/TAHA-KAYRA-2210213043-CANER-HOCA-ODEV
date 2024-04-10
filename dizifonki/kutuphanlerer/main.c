#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
//strlen() fonksiyonu
    char isim [] = {"taha kayra tekin"};

    int uzunluk = strlen(isim);

    printf("%d\n",uzunluk);


//strcpy() fonksiyonu

char orijinal [] = {"orijinal fonksiyon"};

char sahte [100] ;


strcpy(sahte,orijinal);

puts(sahte);


//strcat() fonksiyonu


char birinci [] = { "  ananin " } ;
char ikinci []  = { "  fener  " } ;

strcat(birinci , ikinci ) ;

puts(birinci) ;



// strcmp fonksiyonu

char str [] =  {"abg"};
char str2 [] = {"abc"};

int sonuc = strcmp(str,str2);

if(sonuc == 0 )
{
    printf("ayni karakter dizileri bunlar \n" );

}
else if(sonuc < 0)
{
    printf("%s %s  den once gelir \n ",str,str2);
}
else
{
    printf("%s %s den once gelir \n ",str2,str);
}

    return 0;
}
