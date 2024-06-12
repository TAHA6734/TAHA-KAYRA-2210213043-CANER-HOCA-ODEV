#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

void insertAtBegin (node **head , int newdata)
{
    node *newnode = (node *)malloc(sizeof(node)) ;

    newnode -> data = newdata ;

    newnode -> next = *head ; 

    *head = newnode ;

}

void insertAtEnd(node **head , int newdata)
{
    node *newnode = (node *)malloc(sizeof(node)) ;

    newnode -> data = newdata ; 

    newnode -> next=NULL ;

    if(*head == NULL)
    {
        *head = newnode ; 


    }
    else 
    {
        node *tmp = *head ;
        while(tmp -> next != NULL)
        {
            tmp = tmp -> next ; 

        }
        tmp -> next = newnode ;
    }


}

void printList(node **head)
{
    node *tmp = *head  ; 

    while(tmp!=NULL)
    {
        printf("%d\n",&tmp->data) ;
        tmp = tmp ->next ;
    }
    printf("NULL\n") ;
}



int main() {
    node *head = NULL;
    int sayi;

    printf("Sayı girin, programı bitirmek için -1 girin:\n");

    while (1) {
        scanf("%d", &sayi);
        if (sayi == -1) {
            break;
        } else if (sayi % 2 == 0) {
            insertAtEnd(&head, sayi);
        } else {
            insertAtBegin(&head, sayi);
        }
    }

    printf("Oluşturulan liste:\n");
    printList(head);

    return 0;
}