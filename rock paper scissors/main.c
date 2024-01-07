#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(char player ,char computer)
{
printf("Computers choice is %c\n",computer);
if (player==computer)
    return 2;
if (player=='p'&&computer=='t')
    return 1;
if (player=='r'&&computer=='s')
    return 1;
if (player=='s'&&computer=='p')
    return 1;
if (player=='r'&&computer=='p')
    return 0;
if (player=='s'&&computer=='r')
    return 0;
if (player=='p'&&computer=='s')
    return 0;

}
int main()
{
char seq[3]={'r','p','s'};
int point_player=0;
int point_computer=0;
char coice;
int random;
while(1)
{
  printf("plesea select an option(Rock:r Paper:p Scissors:s):\n");
  scanf(" %c",&coice);
  srand(time(NULL));
  random=rand()3%;
  int end=compare(coice,seq[random]);
  if (end==0)
    point_computer++;
  if(end==1)
    point_player++;
  if (end==2)
    printf("Draw...\n");


    printf("%d-%d\n",point_player,point_computer);





}





    return 0;
}
