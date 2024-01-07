#include <stdio.h>
#include <stdlib.h>

int main()
{
int sayı,tem,sum=0;
printf("lutfen bir sayi giriniz...\n");
scanf("%d",&sayi);
temp=sayi;
while(temp>0){
    sum=sum+sayi;
    printf("%d\n",sayi);
    sayi--;
}
printf("%d\n",sum);

    return 0;
}
