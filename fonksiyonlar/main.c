#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void takimlar()
{
printf("galatasaray\n");
printf("fenerbhace\n");
printf("besiktas\n");
printf("trabzon\n");


}

int sayiniIkiKatiniAl(int sayi)
{
printf("%d",sayi*2);
return sayi*2;
}

float kareKokAlma(int sayi)
{

   return sqrt(sayi);

}

double kareAl(double sayi)
{
return sayi*sayi;
}

char ilkharfiniBAs(char dizi[])
{

    return dizi[3];
}






int main()
{
takimlar();
printf("%d\n",sayiniIkiKatiniAl(5));
printf("%f\n",kareKokAlma(9));
printf("%lf\n",kareAl(10.1));
printf("%c\n",ilkharfiniBAs("TAHA"));
sayiniIkiKatiniAl(5);
return 0;
}




