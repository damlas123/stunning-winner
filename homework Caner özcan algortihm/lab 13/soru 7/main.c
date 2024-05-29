#include <stdio.h>
#include <stdlib.h>

struct number {
    int n1;
    struct number *next;
};
typedef struct number node;

node* deleteNode(node* head, int age);
void add_number(int no);
void list();
node *head = NULL;
node *tail = NULL;

int main() {
    int n;
    printf("Enter numbers (for exit, enter -1): ");
    do {
        scanf("%d", &n);
        if (n != -1) {
            add_number(n);
        }
    } while (n != -1);
    printf("Original list: ");
    list();
    
    int age_to_delete;
    printf("Enter the age to delete the second occurrence of: ");
    scanf("%d", &age_to_delete);
    head = deleteNode(head, age_to_delete);
    
    printf("List after deletion: ");
    list();
    
    return 0;
}

node* deleteNode(node* head, int age) {
    node *current = head, *previous = NULL;
    int count = 0;

    while (current != NULL) {
        if (current->n1 == age) {
            count++;
            if (count == 2) {
                if (previous != NULL) {
                    previous->next = current->next;
                } else {
                    head = current->next; 
                }
                free(current);
                return head;
            }
        }
        previous = current;
        current = current->next;
    }
    return head; 
}

void add_number(int no) {
    node *new_node = (node*)malloc(sizeof(node));
    new_node->n1 = no;
    new_node->next = NULL;

    if (head == NULL) {
        head = tail = new_node;
    } else {
            tail->next = new_node;
            tail = new_node;

    }
}

void list() {
    node *p = head;
    while (p != NULL) {
        printf("%d ", p->n1);
        p = p->next;
    }
    printf("\n");
}

