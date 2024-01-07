#include <stdio.h>
#include <stdlib.h>

int main()
{
float a,b,c,d;
printf("olusturacaginiz dortgenin kenar uzunluklarini girniniz...\n");
scanf("%f%f%f%f",&a,&b,&c,&d);
if(a==b && a==c && a==d){
    printf("kare");
}
else{
    printf("dortgen");
    main();
}


}
