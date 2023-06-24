#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node;


//insert m after all of the nodes containing n
void insertAfterN(node* head, int m, int n) {
    node *tempPtr = head;

    while (tempPtr != NULL) {
        if (tempPtr->data == n) {
            node *add = malloc(sizeof(node));
            add->data = m;
            add->next = tempPtr->next;
            tempPtr->next = add;
        }


        tempPtr = tempPtr->next;
    }

}

void insertList(node **head, int data) {

    node *tempPtr = *head;

    node *add = malloc(sizeof(node));
    add->data = data;
    add->next = NULL;

    if (*head == NULL) {
        *head = add;
    } else {
        while (tempPtr->next != NULL) {
            tempPtr = tempPtr->next;
        }

        tempPtr->next = add;
    }
}

void printList(node *head) {
    while (head != NULL) {
        printf("%4d", head->data);
        head = head->next;
    }
    printf("\n");
}

int main() {

    node* head = malloc(sizeof(node));

    head = NULL;

    insertList(&head, 3);
    insertList(&head, 6);
    insertList(&head, 4);
    insertList(&head, 6);
    insertList(&head, 6);
    insertList(&head, 5);

    printList(head);

    insertAfterN(head, 200, 6);

    printList(head);

    return 0;

}