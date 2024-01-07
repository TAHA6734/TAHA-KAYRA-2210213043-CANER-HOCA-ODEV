#include <stdio.h>
#include <stdlib.h>
#define N 10
int main()
{
  /*float  a [N];
  int sum = 0,ortalama;

    for(int i =0;i<N;i++){
            printf("sayi gir \n");
                scanf("%f\n",&a[i]);
           sum += a[i];

     ortalama = sum / 8 ;

    }
    printf("ortalama = %f\n",ortalama);
    printf("%d\n",sum);*/
/*int num,counter=0;
int a[10];
int k;

    for(int i =0; i<N;i++){
        printf("enter a number \n");
        scanf("%d\n",&num);

        if(num != -1){
            a[i]=num;



        }
        else if (num == -1){


             break;
        }


    }
     for(int i =0;i<N;i++){
          k=a[i]*a[i];
          printf("%d\n",k);

     }



  printf("the end\n");*/

/*int num,temp,counter=0,ld;
int a[10];
printf("Sayi giriiniz...\n");
    scanf("%d\n",&num);
    temp = num ;
while(temp > 0){

    temp = temp / 10 ;

        counter++;

 if (counter <= 5){
   for(int i = 0;i<counter;i++){
    ld = num % 10 ;
        num = num / 10 ;
            a[i]=ld;
                printf("%d\n",a[i]);}
   }

else  {
    break;
}


}*/
int a[N];


for(int i = 0;i<N;i++){
    printf("bir sayi gir...\n");
        scanf("%d\n",&a[i]);
    }
for(int i = 10;i;i--){
    printf("%d\n",a[i]);

    }



















    return 0;
}
