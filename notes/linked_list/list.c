#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};

void insertAtBeginning(int value, struct node **phead) {

    struct node *newNode = malloc(sizeof(struct node));

    newNode->value = value;
    newNode->next = *phead;
    *phead = newNode;

}

void delete() {

}

void display(struct node *phead) {

    struct node *currentNode = malloc(sizeof(struct node));
    currentNode = phead;

    while (currentNode->next != NULL) {
        printf("%d\n", currentNode->value);
        currentNode = currentNode->next;
    }

    printf("%d\n", currentNode->value);

}

void search() {

}

int main() {
    struct node **phead = NULL;

    insertAtBeginning(1,phead);
    insertAtBeginning(2,phead);
    insertAtBeginning(3,phead);
    insertAtBeginning(4,phead);
    insertAtBeginning(5,phead);
    insertAtBeginning(6,phead);
    insertAtBeginning(7,phead);

    display(*phead);

    return 0;
}