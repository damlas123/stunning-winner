#include <stdio.h>
#include <stdlib.h>

struct DATA {
    int data;
    struct DATA *sonraki;
};

typedef struct DATA node;

node *head = NULL, *yeni, *simdiki, *temp;

void createNode() {
    int num;
    while (1) {
        printf("Eleman girin: ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        yeni = (node *)malloc(sizeof(node));
        yeni->data = num;
        yeni->sonraki = NULL;

        if (head == NULL) {
            head = yeni;
        } else {
            temp->sonraki = yeni;
            
        }
        temp = yeni;
    }
}

void sortedInsert(node **sirala, node *yeni) {

    if (*sirala==NULL ||  (*sirala)->data >= yeni->data) {
        yeni->sonraki = *sirala;
        *sirala = yeni;
    } else {
      simdiki= *sirala;
        while (simdiki->sonraki != NULL && simdiki->sonraki->data < yeni->data) {
            simdiki = simdiki->sonraki;
        }
        yeni->sonraki = simdiki->sonraki;
        simdiki->sonraki = yeni;
    }
}

void sortList() {
    node *sorted = NULL;
   simdiki = head;

    while (simdiki != NULL) {
        node *next = simdiki->sonraki;
        sortedInsert(&sorted, simdiki);
        simdiki = next;
    }
}

void printList(node *head) {
    node *temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->sonraki;
    }

}

int main() {
    printf("Liste elemanlarini giriniz (-1 girerek bitirin):\n");

    createNode();
    printf("Baslangictaki liste: ");
    printList(head);

    sortList();
    printf("Duzenlendikten sonraki liste: ");
    printList(head);

    return 0;
}
