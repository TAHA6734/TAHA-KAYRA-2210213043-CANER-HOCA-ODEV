#include <stdio.h>
#include <stdlib.h>

// Bağlı liste düğüm yapısı
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Yeni düğüm oluşturma
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Hafıza ayrılırken hata oluştu.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Listeyi baştan yazdırma
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node* head = NULL;  // Listenin başı
    Node* tail = NULL;  // Listenin sonu
    int number;

    printf("Sayıları giriniz (-1 ile sonlandırın):\n");
    while (1) {
        scanf("%d", &number);

        if (number == -1) {
            break;
        }

        Node* yeni = createNode(number);

        if (number % 2 == 0) {  // Çift sayı ise sona ekle
            if (tail == NULL) {
                head = tail = yeni;
            } else {
                tail->next = yeni;
                tail = yeni;
            }
        } else {  // Tek sayı ise başa ekle
            yeni->next = head;
            head = yeni;
            if (tail == NULL) {
                // Liste boşsa sonu da bu düğüm yap
                tail = head;
            }
        }
    }

    printf("Liste: ");
    printList(head);

    // Hafızayı temizle
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}
