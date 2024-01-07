#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi,temp,sum=0;
   printf("lutfen bir sayi giriniz...\n");
   scanf("%d",&sayi);
   temp=sayi;
   while(temp>0){
sum=sum+temp;
printf("%d\n",temp);
       temp--;


   }
printf("sonuc = %d\n",sum);

    return 0;

}
