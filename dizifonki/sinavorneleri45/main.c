#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N;
   int A[100], B[100],C[100];
   printf("how many number will you sum up...\n");
   scanf("%d",&N);

    for(int i = 0 ; i < N ; i++)
        {
           printf("A[%d]:",i);
           scanf("%d",&A[i]);
        }

    for(int i = 0 ; i < N ; i++)
        {
           printf("B[%d]:",i);
           scanf("%d",&B[i]);
        }

    for(int i = 0 ; i < N ; i++)
        {
          C[i]=A[i]+B[i];
          printf("A[%d]+B[%d] = %d\n",i,i,C[i]);
        }

    return 0;
}
