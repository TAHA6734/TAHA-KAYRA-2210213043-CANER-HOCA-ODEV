#include<stdlib.h>
#include<stdio.h>
#include<time.h>

int main()
{
printf("Welcome to the Rock,Paper and Scissors game ....\n");
srand(time(NULL));
int i=10,human;
int HumanScore,ComputersScore,Draw;
while(i<10)
{
printf("Please select an option 1.Rock 2.Paper 3.Scissors...\n");
scanf("%d",&human);
int computer=(rand()%3)+1;


if(human==1)
{
if(computer==3)
    {
    printf("You win...\n");
    HumanScore++;
    }

    else if(computer==2)
    {
    printf("Computer wins...\n");
    ComputersScore++;
    }

else if(computer==1)
    {
    printf("Draw...\n");
    Draw++;
    }
}

else if(human==2)
{
   if(computer==3)
   {
    printf("Compter wins...\n");
   ComputersScore++;
   }

    else if(computer==2)
   {
  printf("Draw...\n");
  Draw++;
   }

else if(computer==1)
    {
    printf("Human Wins...\n");
    HumanScore++;
    }
}
else if(human==3)
{
if(computer==3)
  {
  printf("Draw...\n");
  Draw++;
  }

else if(computer==2)
{
    printf("Human wins wins...\n");
    HumanScore++;
}

else if(computer==1){
    printf("Computer wins...\n");
     ComputersScore++;}
}

else {
    printf("You have only 3 options please select an exist option...");
}

i++;
}
















printf("Your score %d %d Computers score\n",HumanScore,ComputersScore);
printf("The Draw results=%d",Draw);
    return 0;
}
