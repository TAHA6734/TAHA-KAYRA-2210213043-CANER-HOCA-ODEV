#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
   int data ;
   struct node *next ;
}node;


node *changeFirstToLast(node *head )
{
        if(head == NULL || head -> next == NULL)
        {
            printf("islem yapilmadi \n ");
            return head ;
        }

        node *prev = NULL;
        node *current = head ;

        while(current->next==NULL)
        {
            prev = current ;
            current = current -> next ;
        }

        current -> next = head -> next ;
        head -> next = NULL ;
        prev -> next = head ;
        head = current ;

        return head ;

}

node *firstTolast(node *head)
{
    if(head == NULL || head -> next == NULL)
    {
        printf("islem gecersiz \n ");
        return head ;
    }

    node *first = head ;
    node *secondFirst = head -> next ;


    node *tmp = NULL ;
    while(tmp->next != NULL)
    {
            tmp = tmp -> next ;
    }
            tmp -> next = first ;
            first -> next = NULL ;
            head = secondFirst ;

            return secondFirst;

}

node *deleteSecondAge(node *head , int age )
{
    if(head == NULL || head -> next == NULL)
    {
        printf("gecersiz islem \n ");
        return head ;
    }

    int coun = 0 ;
    node *prev = NULL ;
    node *current = head; 

while(current != NULL)
{
    if(current->age = age )
    {
        coun++;
    }
    if(coun == 2)
    {
        if(prev != NULL)
        {
            prev -> next = current -> next ;
        }
        else{
            head = current ->next;
        }
         free(current);
    return head ;
    }
    prev = current ;
    current = current -> next ;
   
}



}