#include <stdio.h>
#include <stdlib.h>

int main()
{
 /* char *takimlar[]={"Balikesirspor","Galatasaray","Besiktas","Fenerbahce"};


  for (int i=0;*takimlar[i]!='0\n';i++)
{
    printf("%s\n",*(takimlar+i));


    }*/



    char ulke[5][20];
    for(int i=0;i<5;i++)
{
 printf("%d. ulkeyi giriniz",i+1);
 scanf("%s",&ulke[i]);

}

for(int i=0;i<5;i++)
{
printf("%s\n",ulke[i]);
}


char * ulkeAdresleri[5];

for(int i=0;i<5;i++)
{
   ulkeAdresleri[i]=&ulke[i];
}

for(int i=0;i<5;i++)
{
printf("%s\n",*(ulkeAdresleri+i));
}
    return 0;
}
