#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data ;
    struct node *next ;
}node;


void *createList(int data)
{
    node *yeni = (node*)malloc(sizeof(node));

if(yeni == NULL)
{
    printf("olusturulamadi \n ") ;
    exit(EXIT_FAILURE);
}

    yeni -> data = data; 
    yeni -> next = NULL;
    return yeni ;
}

void printLisr(node *head )
{
    node *tmp = head ;

    while(tmp != NULL)
    {
        printf("%d",&tmp -> data);
        tmp = tmp -> next ;
    }
}

node *movelastToFront(node *head)
{
            node *last = head ;
            node *secondLast = NULL;


            if(head = NULL || head -> next == NULL)
            {
                printf("islem gecersiz \n ");
                return head; 
            }

            while(last -> next != NULL)
            {
                secondLast = last ;
                last = last -> next ;
            }

            secondLast -> next = head;
            last -> next = head ;
            head = last ; 
            return head  ;
}