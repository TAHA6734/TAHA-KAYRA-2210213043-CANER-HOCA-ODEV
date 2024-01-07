#include <stdio.h>

int main() {
   int num,counter=1,fac=1,sum=0,ld,temp;
  scanf("%d",&num);
  while(counter<=num){

        while(counter>0){
        ld=counter%10;
        for(int i=1;i<ld;i++){
            fac=fac*i;
        }
        sum=sum+fac;
        counter=counter/10;
        }

    if(sum==counter){
        printf("%d is strong number\n",sum);
    }

    counter++;
  }


    return 0;
}


















