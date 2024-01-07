#include <stdio.h>
#include <stdlib.h>

int main()
{
int puan;
printf("lutfen puaninizi giriniz");
scanf("%d",&puan);

/*100-80 --> cok iyi puan
80-60 --> iyi puan
60-40 --> orta puan
40-20 --> kotu puan
20-0 --> cok kotu puan*/


if(puan >= 80 && puan<=100){
    printf("cok iyi puan");
}

else if(puan>=60 && puan<80){
    printf("iyi puan");
}

else if (puan>=40 && puan<60){
    printf("orta puan");
}

else if (puan>=20 && puan<40){
    printf("kotu puan");
}

else if (puan>=0 && puan<20){
    printf("cok kotu puan");
}

else {
    printf("lutfen gecerli bir puan giriniz");
}
    return 0;
}
