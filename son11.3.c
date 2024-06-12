#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
}node ;

 node *createNode(int data)
 {
    node *yeni = (node*)malloc(sizeof(node));

    if(yeni == NULL)
    {
        printf("yer  yok \n ");
        exit(EXIT_FAILURE);
    }

    yeni ->data = data ;
    yeni -> next = NULL ;
    return yeni ;
 }

 void printList(node *head )
 {
    node *tmp = head ;
            while(tmp != NULL)
            {
                printf("%d\n",&tmp -> data);
                tmp = tmp ->next ;
            }  
}


node *deleteMIddle(node *head )
{
    if(head == NULL || head -> next == NULL)
    {
        printf("degisiklige gerek yok \n ");
        return head ;
    }

    int lenght = 0 ;
    node *tmp = head ;

    while(tmp != NULL)
    {
        lenght++;
        tmp = tmp -> next ;
    }

    int middle = lenght / 2 ;

    node *current = head ;
    node *prev = NULL ;

    for(int i = 0 ;  i < middle ; i++)
    {
        prev = current ;
        current =  current-> next ;

    }

    if(prev != NULL)
    {
        prev -> next = current -> next ;

    }
    else{
        head = current -> next ;
    }
    free(current);

    return head ;


}
