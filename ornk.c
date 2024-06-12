#include <stdio.h>
#include <stdlib.h>

 typedef struct node
{
    int data ; 
    struct node *next ;
}node;

struct node *createNode(int data)
{
    node *yeni = (struct node *)malloc(sizeof(struct node));

    yeni -> data = data ;

    yeni -> next = NULL ; 

    return yeni ; 
}

void append(struct node **head , int data )
{
        struct node *yeni = createNode(data) ;


        if(*head == NULL)
        {
            *head = yeni ;
            return ;
        }

        struct node *tmp = *head ; 

        while(tmp -> next != NULL)
        {
                tmp = tmp -> next ; 

        }
        tmp -> next = yeni ; 
        yeni -> next = NULL ;
        


}

        int getlenght(struct node *head){

                int lenght = 0 ; 

                struct node *tmp = head ; 
                while(tmp == NULL)
                    {
                        tmp = tmp -> next ; 
                        lenght++;
                    }
                    return lenght ;

        }

void deletemiddle(struct node **head )
{
    if(*head == NULL || (*head) -> next == NULL)
    {
        return ;
    }


        int lenght = getlenght(*head) ;
        int minIndex = lenght/2 ;

        struct node *tmp = *head ; 
        struct node *prev = NULL ; 

        for(int i = 0 ; i < minIndex ; i++)
        {
            prev = tmp; 
            tmp = tmp ->next ;
        }

        if(prev != NULL)
        {
            prev -> next = tmp -> next ;
            free(tmp);
        }
        else{
            *head = tmp -> next ;
            free(tmp) ;
        }


}

void printList(struct node *head )
{
    struct node *tmp = head ;

    while(tmp != NULL)
    {
        printf("%d\n",tmp->data);
        tmp = tmp->next ;
    }
    printf("NULL\n");
}
int main()
{

    struct node *head = NULL ;

    for(int i = 0 ; i < 101 ; i++)
    {
        append(&head , i) ;
    }

    printf("silmeden once \n ") ;
    printList(head); 

    printf("SILINMIS HAli \n ") ;
     deletemiddle(*head ) ;


    return 0 ;
}

